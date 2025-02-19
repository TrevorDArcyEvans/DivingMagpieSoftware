/*-----------------------------------------------------------------------*
 * filename - scantol.c
 *
 * function(s)
 *        _scantol  - scans a source for an ascii long
 *        _scanwtol  - scans a source for a wide-character long
 *-----------------------------------------------------------------------*/

/*
 *      C/C++ Run Time Library - Version 10.0
 *
 *      Copyright (c) 1987, 2000 by Inprise Corporation
 *      All Rights Reserved.
 *
 */

/* $Revision:   9.0  $        */

#include <_scanf.h>
#include <stdio.h>
#include <ctype.h>
#include <limits.h>
#include <tchar.h>
#include <_tchar.h>

/*-----------------------------------------------------------------------*

Name            _scantol, _scanwtol - scans a source for an ascii/wide-
					character long

Prototype in    _scanf.h

Description     Scan input to parse a long integer.  The syntax of the
                string must be:

                        long     ::= [isspace]* [sign] numeral;

                        numeral  ::= { '0' ['x'|'X'] digit [digit]* } |
                                     { digit [digit] }

                "srceP" must be a source of characters, such as a FILE *.
                Get() and UnGet() must operate on srceP to read and replace
                characters so that LR(1) parsing is permitted.

                The radix may be zero, or any number 2..36.  If the radix
                is zero, then a radix will be chosen from the possibilities
                8, 10, or 16, by the usual "C" rules for distinguishing octal,
                decimal, and hex numerals.

                If radix > 10 then the letters of the alphabet "A..Z" form
                the extended set of valid digits.

                If the radix is invalid or no number could be found then the
                result value is zero and the next char pointer will equal
                the starting string pointer.

                The width is the limit on the number of digits which may be
                accepted.  It includes the sign character, if any, but does
                not include any leading spaces.

                The count value returned to the caller is a count of all the
                characters consumed, including leading spaces even if no
                numerals are found.  It is ADDED to the existing value of
                count.

                The status returned is EOF if EOF was encountered before
                conversion could begin, 0 if no numerals were found before
                some other character occurred, 1 if the conversion proceeded
                correctly, and 2 if overflow occurred.

Return value    If no errors, the ASCII number converted to long integer;
                otherwise 0.

*------------------------------------------------------------------------*/

long _scanttol( int   (*Get)   (void *srceP),
                    void  (*UnGet) (int ch, void *srceP),
                    void   *srceP,
                    int           radix,
                    int           width,
                    int      *countP,
                    int      *statusP )
{
    char        sign = 0;
    int         ct = 0;
    int         status = 1;
    _TINT       ch;
    unsigned long result = 0;
    int         ndigits = 0;
    enum { _space, _sign, _radix, _digits } stage;


    stage = _space;
    for (;;)
    {
        /* Get the next input character.
         */
        ct++;
        ch = Get (srceP);

        /* Skip over any white-space prefix characters, which don't
         * count as part of the width.
         */
        if (stage == _space)
        {
            if (ch >= 0 && ch < 128 && _istspace(ch))
                continue;
            stage = _sign;
        }

        if (--width < 0)
            break;

        /* Check for optional plus or minus sign.
         */
        if (stage == _sign)
        {
            stage = _radix;
            if (ch == _TEXT('+') || ch == _TEXT('-'))
            {
                sign = ch == _TEXT('-');
                continue;
            }
        }

        /* Check the radix.  If zero, the number may be prefixed
         * with 0x or 0X to indicate hex, or 0 to indicate octal.
         */
        if (stage == _radix)
        {
            stage = _digits;
            if (ch == _TEXT('0'))
            {
                ndigits = 1;

                if (radix == 0 || radix == 16)
                {
                    ct++;
                    ch = Get (srceP);
                    if (--width < 0)
                        break;
                    if (ch == _TEXT('x') || ch == _TEXT('X'))
                    {
                        radix = 16;
                        continue;
                    }
                    else if (radix == 0)
                        radix = 8;
                }
            }

            if (radix == 0)
                radix = 10;
            else if (radix < 1 || radix > 36)
                break;
        }

        /* Accumulate the digits.
         */
        if (stage == _digits)
        {
            int digit;
            unsigned long oldresult;

            if (ch >= _TEXT('0') && ch <= _TEXT('9'))
                digit = ch - _TEXT('0');
            else if (ch >= _TEXT('a') && ch <= _TEXT('z'))
                digit = ch - _TEXT('a') + 10;
            else if (ch >= _TEXT('A') && ch <= _TEXT('Z'))
                digit = ch - _TEXT('A') + 10;
            else
                break;
            if (digit >= radix)
                break;

            ndigits++;
            oldresult = result;
            result = result * radix + digit;
            if ((result - digit) / radix != oldresult)
            {
                status = 2;         /* overflow */
                result = sign ? LONG_MIN : LONG_MAX;
                break;
            }
        }
    }

    /* If there wasn't an overflow, push back the last character read
     * and negate the result if '-' was seen.
     */
    if (status != 2)
    {
        UnGet(ch, srceP);
        ct--;
        if (sign)
            result = -(signed)result;
    }

    /* If no digits were seen, set status to 0 or EOF, depending
     * on whether we terminated due to an end of file.
     */
    if (ndigits == 0)
        status = ch == _TEOF ? _TEOF : 0;

    /* Store the status of the scan and the number of characters
     * scanned, then return the result.
     */
    *statusP = status;
    *countP += ct;
    return ((long)result);
}
