
# PlagueTitleChanger
Defeating FindWindow Anti Debug.

## Technical Overview
A good amount of anti debug software has started using **FindWindow** and **EnumWindows** to detect reverse engineering / debugging tools being present, This is very easy to bypass however, With the combination of **EnumWindows** and **SetWindowTextA**, One can easily change the title of whatever window they might want to hide from this type of software, Also this method is used in **alot** of anti tamper and anti cheat software.

## Resources
- [EnumWindows - MSDN](https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-enumwindows)
- [SetWindowTextA - MSDN](https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-setwindowtexta)
