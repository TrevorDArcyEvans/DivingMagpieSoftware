/*-----------------------------------------------------------------------*
 * filename - xfflush.c
 *
 * function(s)
 *        _xfflush - flushes streams
 *-----------------------------------------------------------------------*/

/*
 *      C/C++ Run Time Library - Version 10.0
 *
 *      Copyright (c) 1987, 2000 by Inprise Corporation
 *      All Rights Reserved.
 *
 */

/* $Revision:   9.0  $        */

#include <stdio.h>
#include <_stdio.h>

/*---------------------------------------------------------------------*

Name        _xfflush - flushes streams

Usage       void _xfflush(void)

Description called at exit to flush open streams

*---------------------------------------------------------------------*/

void _xfflush(void)
{
    FILE   *fp;
    int    i;

    _lock_all_streams();
    for (i = 0, fp = _streams; i < _nfile; i++, fp++)
        if (fp->flags & _F_RDWR)
            fflush(fp);
    _unlock_all_streams();
}
