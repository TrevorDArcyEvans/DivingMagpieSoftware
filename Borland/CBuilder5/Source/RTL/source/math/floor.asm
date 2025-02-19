;[]-----------------------------------------------------------------[]
;|   FLOOR.ASM -- rounding function                                  |
;[]-----------------------------------------------------------------[]

;
;       C/C++ Run Time Library - Version 10.0
; 
;       Copyright (c) 1991, 2000 by Inprise Corporation
;       All Rights Reserved.
; 

; $Revision:   9.0  $

;----------------------------------------------------------------------
; function(s)
;        floor - rounds down
;----------------------------------------------------------------------

        include RULES.ASI
        include _MATH.INC

;       Segments Definitions

Header@


;--------------------------------------------------------------------------
;
;Name            floor - rounds down
;
;Usage           double floor(double x);
;
;Prototype in    math.h
;
;Description     floor finds the largest integer not greater than x.
;
;Return value    floor returns the integer found as a double.
;
;--------------------------------------------------------------------------

Code_Seg@

ExtFunc@ _round, _RTLENTRY, 0

Func@   floor, _EXPFUNC, _RTLENTRY, <double x>

        Link@

        FLD     x.double

        mov     ax, x [6]
        shl     ax, 1
        cmp     ax, 7FE0h + 06A0h       ; 2^53, maximum double precision
        ja      dlm_beyond

        mov     ch, 04          ; iNDP-87 control bits for floor mode
        Call@   _round          ; _round() modifies the '87 TOS

dlm_beyond:                     ; magnitudes beyond 2^53 have no fraction
dlm_end:
        Unlink@                 ; return (result on TOS)
        Return@

EndFunc@ floor

Code_EndS@
        end
