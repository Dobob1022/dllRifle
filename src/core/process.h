/*
* This file is part of dllRifle.
*
* dllRifle is free software : you can redistribute itand /or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* dllRifle is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with dllRifle.If not, see < https://www.gnu.org/licenses/>.
*/

#ifndef _INTERACTIVE_H
#define _INTERACTIVE_H

#ifndef _MSC_VER
#pragma comment(lib, "uuid.lib")
#endif

#include "windows.h"
#include <iostream>
#include <tlhelp32.h>
#include <tchar.h>
#include <psapi.h>

namespace DllRifle {
    namespace Core {
        class Process {
        public:
            BOOL __stdcall GetProcessList(WCHAR *wcExeFile);
            BOOL __stdcall GetProcessModules(HANDLE hProcess, char *cpModuleName);
        };
    }
}
#endif