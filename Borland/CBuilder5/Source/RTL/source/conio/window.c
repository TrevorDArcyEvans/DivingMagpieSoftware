/*-----------------------------------------------------------------------*
 * filename - window.c
 *
 * function(s)
 *        window - defines a rectangular area of the screen as a window
 *                 and puts the cursor inside the window
 *-----------------------------------------------------------------------*/

/*
 *      C/C++ Run Time Library - Version 10.0
 *
 *      Copyright (c) 1987, 2000 by Inprise Corporation
 *      All Rights Reserved.
 *
 */

/* $Revision:   9.0  $        */

#include <_video.h>
#include <conio.h>

/*---------------------------------------------------------------------*

Name            window - defines a rectangular area of the screen as a
                         window and puts the cursor inside the window

Usage           void window(int left, int top, int right, int bottom);

Prototype in    conio.h

Description     window defines a text window on the screen.  If the
                coordinates are in any way invalid, the call to window()
                is ignored.

                left and top are the screen coordinates of the upper left
                corner of the window.

                right and bottom are the screen coordinates of the lower
                right corner.

                The minimum size of the text window is 1 column by 1
                line. The default window is full screen, with these
                coordinates:

                        80-column mode: 1, 1, 80, 25
                        40-column mode: 1, 1, 40, 25

Return value    None

*---------------------------------------------------------------------*/

void _RTLENTRY _EXPFUNC window(int left, int top, int right, int bottom)
{
    left    -= 1;
    right   -= 1;
    top     -= 1;
    bottom  -= 1;

    /* Consistency checking
     */
    if (left < 0  ||
        right >= _video.screenwidth ||
        top  < 0 ||
        bottom >= _video.screenheight ||
        right - left < 0 ||
        bottom - top < 0) return;

    _video.windowx1 = left;
    _video.windowx2 = right;
    _video.windowy1 = top;
    _video.windowy2 = bottom;

    __movecursor(left, top);
}
