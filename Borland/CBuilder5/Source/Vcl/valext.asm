
; *******************************************************
; *							*
; *     Delphi Runtime Library                          *
; *							*
; *	Copyright (c) 1996,98 Inprise Corporation	*
; *							*
; *******************************************************

	INCLUDE	SE.ASM


	.386
	.MODEL	FLAT

	EXTRN	_Pow10:NEAR

	PUBLIC	_ValExt, @_ValExt

	.CODE

;	FUNCTION _ValExt( s: AnsiString; VAR code: Integer ) : Extended;

_ValExt PROC
@_ValExt:

; ->	EAX	Pointer to string
;	EDX	Pointer to code result
; <-	FST(0)	Result

	PUSH	EBX
	PUSH	ESI
	PUSH	EDI


	MOV	ESI,EAX
	PUSH	EAX			; save for the error case

	FLDZ
	XOR	EAX,EAX
	XOR	EBX,EBX
	XOR	EDI,EDI

	PUSH	EBX			; temp to get digs to fpu

	TEST	ESI,ESI
	JE	@@empty

@@blankLoop:
	MOV	BL,[ESI]
	INC	ESI
	CMP	BL,' '
	JE	@@blankLoop

@@endBlanks:
	MOV	CH,0
	CMP	BL,'-'
	JE	@@minus
	CMP	BL,'+'
	JE	@@plus
	JMP	@@firstDigit

@@minus:
	INC	CH
@@plus:
	MOV	BL,[ESI]
	INC	ESI

@@firstDigit:
	TEST	BL,BL
	JE	@@error

@@digLoop:
	SUB	BL,'0'
	CMP	BL,9
	JA	@@dotExp
	FMUL	ten
	MOV	dword ptr [ESP],EBX
	FIADD	dword ptr [ESP]

	MOV	BL,[ESI]
	INC	ESI

	TEST	BL,BL
	JNE	@@digLoop

	JMP	@@finish

@@dotExp:
	CMP	BL,'.' - '0'
	JNE	@@exp

	MOV	BL,[ESI]
	INC	ESI

	TEST	BL,BL
	JE	@@finish

@@fracDigLoop:
	SUB	BL,'0'
	CMP	BL,9
	JA	@@exp
	FMUL	ten
	MOV	dword ptr [ESP],EBX
	FIADD	dword ptr [ESP]
	DEC	EAX

	MOV	BL,[ESI]
	INC	ESI

	TEST	BL,BL
	JNE	@@fracDigLoop
	JMP	@@finish

@@exp:
	CMP	BL,'E' - '0'
	JE	@@foundExp
	CMP	BL,'e' - '0'
	JNE	@@error
@@foundExp:
	MOV	BL,[ESI]
	INC	ESI
	MOV	AH,0
	CMP	BL,'-'
	JE	@@minusExp
	CMP	BL,'+'
	JE	@@plusExp
	JMP	@@firstExpDigit
@@minusExp:
	INC	AH
@@plusExp:
	MOV	BL,[ESI]
	INC	ESI
@@firstExpDigit:
	SUB	BL,'0'
	CMP	BL,9
	JA	@@error
	MOV	EDI,EBX
	MOV	BL,[ESI]
	INC	ESI
	TEST	BL,BL
	JZ	@@endExp
@@expDigLoop:
	SUB	BL,'0'
	CMP	BL,9
	JA	@@error
	LEA	EDI,[EDI+EDI*4]
	ADD	EDI,EDI
	ADD	EDI,EBX
	MOV	BL,[ESI]
	INC	ESI
	TEST	BL,BL
	JNZ	@@expDigLoop
@@endExp:
	DEC	AH
	JNZ	@@expPositive
	NEG	EDI
@@expPositive:
	MOVSX	EAX,AL

@@finish:
	ADD	EAX,EDI
	PUSH	EDX
	PUSH	ECX
	CALL	_Pow10
	POP	ECX
	POP	EDX

	DEC	CH
	JE	@@negate

@@successExit:

	ADD	ESP,8		; pop temp and saved copy of string pointer

	XOR	ESI,ESI		; signal no error to caller

@@exit:
	MOV	[EDX],ESI

	POP	EDI
	POP	ESI
	POP	EBX
	RET

@@negate:
	FCHS
	JMP	@@successExit

@@empty:
	INC	ESI

@@error:
	POP	EAX
	POP	EBX
	SUB	ESI,EBX
	JMP	@@exit

ten	DQ	10.0

_ValExt ENDP

	END
