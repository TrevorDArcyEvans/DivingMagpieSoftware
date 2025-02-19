/*-----------------------------------------------------------------------*
 * filename - initstk.c
 *
 * function(s)
 *      _initstk     - initialize stack at startup
 *-----------------------------------------------------------------------*/

/*
 *      C/C++ Run Time Library - Version 10.0
 *
 *      Copyright (c) 1991, 2000 by Inprise Corporation
 *      All Rights Reserved.
 *
 */

/* $Revision:   9.0  $        */

#include <_defs.h>

#if defined(_BUILDRTLDLL)
extern int __import _stkchk;
#else
extern int          _stkchk;
#endif

/*---------------------------------------------------------------------*

Name            _initstk - initialize stack at startup

Usage           void _initstk(void);

Description     This function is called at startup time if stack
                checking is enabled (see chkstk.asm).  It merely
                sets a flag that causes the exception handler
                to print a message and exit if a stack overflow
                exception occurs.

Return value    None.

*---------------------------------------------------------------------*/

void _RTLENTRY _initstk(void)
{
    /* Set flag to let exception handler in startup.c know that
     * stack overflow checking is enabled.  We don't need to fill
     * the stack with guard pages, because NT does that automatically.
     */
    extern unsigned char __isDLL;

    if  (!__isDLL)
        _stkchk = 1;
}
