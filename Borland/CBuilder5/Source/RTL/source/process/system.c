/*-----------------------------------------------------------------------*
 * filename - system.c
 *
 * function(s)
 *    system - issues an NT command
 *    wsystem - issues an NT command
 *-----------------------------------------------------------------------*/

/*
 *      C/C++ Run Time Library - Version 10.0
 *
 *      Copyright (c) 1991, 2000 by Inprise Corporation
 *      All Rights Reserved.
 *
 */

/* $Revision:   9.0  $        */

#include <stdlib.h>
#include <process.h>
#include <_process.h>
#include <errno.h>
#include <string.h>
#include <tchar.h>
#include <_tchar.h>

/*---------------------------------------------------------------------*

Name            system, wsystem - issues an NT command

Usage           int system(const char *command);
                int system(const wchar_t *command);

Prototype in    stdlib.h

Description:    system invokes the NT command processor to execute
                a command given in the string command, as if the command
                had been typed at the NT prompt.

                The COMSPEC environment variable is used to find the
                command processor file, so the file does not need to be in
                the current directory.  If COMSPEC isn't set, system
                searches the PATH for CMD.EXE.

Return value:   If command is a NULL pointer then system() returns
                nonzero if a command processor is available.  If
                command is not a NULL pointer, system() returns
                zero if the command processor was successfully If
                an error occurred, a -1 is returned and errno is
                set to

                        ENOENT, ENOMEM, E2BIG, or ENOEXEC.

                ENOENT  - command processor not found
                ENOMEM  - not enough memory
                E2BIG   - argument list too long
                ENOEXEC - the command processor is not a valid executable

*---------------------------------------------------------------------*/

int _RTLENTRY _EXPFUNC _tsystem(const _TCHAR *cmd)
{
    _TCHAR          *cmdP;
    _TCHAR          *pathP;
    int             rc;
    _TCHAR          pathbuf[_MAX_PATH];
    _TCHAR          *argP[3];

    /* Try to locate the command processor.  First try COMSPEC,
     * and if that isn't defined, search the PATH for CMD.EXE.
     */
    if ((pathP = _tgetenv(_TEXT("COMSPEC"))) == NULL)
    {
        _tsearchenv(_TEXT("CMD.EXE"),_TEXT("PATH"),pathbuf);
        if (pathbuf[0] == _TEXT('\0'))
            errno = ENOENT;
        else
            pathP = pathbuf;
    }

    /* Check whether user just wants to test if command processor is available.
     */
    if (cmd == NULL)
        return (pathP != NULL);

    if (pathP == NULL)
        return (-1);

    /* Build command line.
     */
    if (((cmdP = malloc((_tcslen(cmd)* sizeof(_TCHAR)) + (4*sizeof(_TCHAR)))) == NULL))
    {
        errno = ENOMEM;
        return (-1);
    }

    _tcscpy(cmdP, _TEXT("/c "));
    _tcscat(cmdP, cmd);

    /* Now, call the low level program loading function.  It expects
     * the arguments in an array of pointers.
     */
    argP[0] = pathP;
    argP[1] = cmdP;
    argP[2] = NULL;
    rc = _tLoadProg(P_WAIT, pathP, (const _TCHAR * const *)argP, NULL, 0);

    /* Release all buffers and return the exit status of CMD.EXE.
     */
    free(cmdP);
    return (rc);
}
