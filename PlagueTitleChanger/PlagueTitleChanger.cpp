#include <iostream>
#include<vector>
#include<windows.h>

std::vector<LPCSTR> changeTitleFor { "ida", "IDA: Quick Start", "Cheat Engine", "x64dbg", "x32dbg" };
BOOL CALLBACK PlagueWndCallBack(HWND hWindow, LPARAM lParam) {

    char windowName[MAX_PATH];
    int length = GetWindowTextA(hWindow, windowName, MAX_PATH);

    if (length > 0) {

        for (LPCSTR& blacklistedTitle : changeTitleFor) {

            if (!_strnicmp(blacklistedTitle, windowName, sizeof(blacklistedTitle))) {

                printf("[+] Found Window ( %s )\n", windowName);

                if (!SetWindowTextA(hWindow, "Hidden By Plague")) {
                    printf("[-] Error Setting Title ( %s ), Code: %ld\n", windowName, GetLastError());
                }
            }
        }
        
    }
    

    return TRUE;
}

int main()
{
    EnumWindows(PlagueWndCallBack, NULL);
}
