;[]-----------------------------------------------------------------[]
;|   LROTR.ASM -- right rotate of unsigned long                      |
;[]-----------------------------------------------------------------[]

;
;       C/C++ Run Time Library - Version 10.0
; 
;       Copyright (c) 1991, 2000 by Inprise Corporation
;       All Rights Reserved.
; 

; $Revision:   9.0  $

        include RULES.ASI

;       Segments Definitions

Header@

;-----------------------------------------------------------------------
;
;Name           _lrotr - rotates an unsigned long right
;
;Usage          unsigned long _lrotr(unsigned long val, int rotate_count)
;
;Prototype in   stdlib.h
;
;Description    _lrotr rotates an unsigned long integer val right
;               rotate_count bits.
;
;Return value   the value after rotation
;
;-----------------------------------------------------------------------

Code_seg@

Func@   _lrotr, _EXPFUNC, _RTLENTRY, <long val>, <int rcount>

        mov     eax, [esp+4]        ; get value
        mov     ecx, [esp+8]        ; get rotate count
        ror     eax,cl              ; rotate the value
        Return@

EndFunc@ _lrotr

Code_EndS@

        end
