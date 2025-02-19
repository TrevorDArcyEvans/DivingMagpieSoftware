/*-----------------------------------------------------------------------*
 * filename - vlibstub.c: Supplies the RTL with a valid symbol from crtlvcl.c
 *
 * function(s)
 *
 *   __CRTL_VCLLIB_Linkage
 *
 *-----------------------------------------------------------------------*/

/*
 *      C/C++ Run Time Library - Version 10.0
 *
 *      Copyright (c) 1997, 2000 by Inprise Corporation
 *      All Rights Reserved.
 *
 */

/* $Revision:   9.1  $        */

#include <_defs.h>

/*
 * The following function is stubbed out to do nothing.
 * The real one is in VCLLIB.C.
 */

void _RTLENTRY __declspec(naked) __CRTL_VCLLIB_Linkage (void)
{
    __emit__(0xC3); /* asm ret */
}
