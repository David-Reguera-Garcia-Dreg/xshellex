
/*
xshellex - MIT License - Copyright 2020
David Reguera Garcia aka Dreg - dreg@fr33project.org
http://github.com/David-Reguera-Garcia-Dreg/ - http://www.fr33project.org/
Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.
THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
IN THE SOFTWARE.
-
C-shellcode to hex
-
WARNING! this is a POC, the code is CRAP
*/

#ifndef _PLUGINMAIN_H
#define _PLUGINMAIN_H

// Include files required for plugin SDK
#include "pluginsdk\TitanEngine\TitanEngine.h"
#include <windows.h>
#include <stdio.h>
#include <psapi.h>
#include "pluginsdk\_plugins.h"

#ifndef DLL_EXPORT
#define DLL_EXPORT __declspec(dllexport)
#endif //DLL_EXPORT

// Superglobal variables
extern int pluginHandle;
extern HWND hwndDlg;
extern int hMenu;
extern int hMenuDisasm;
extern int hMenuDump;
extern int hMenuStack;

// menu identifiers
#define MENU_TEST 1

#ifdef __cplusplus
extern "C"
{
#endif

// Default plugin exports - required
DLL_EXPORT bool pluginit(PLUG_INITSTRUCT* initStruct);
DLL_EXPORT bool plugstop();
DLL_EXPORT void plugsetup(PLUG_SETUPSTRUCT* setupStruct);

#ifdef __cplusplus
}
#endif

#endif //_PLUGINMAIN_H
