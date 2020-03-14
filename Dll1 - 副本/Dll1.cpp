#define DLL_API extern "C" _declspec(dllexport)
#include "Dll1.h"
#include <WINDOWS.H>
#include <STDIO.H>
int _stdcall add(int a,int b)
{
	return a+b;
}
int _stdcall subtract(int a,int b)
{
	return a-b;
}

/*
void Point::Output(int x,int y)
{
   HWND hwnd = GetForegroundWindow();
   HDC hdc = GetDC(hwnd);
   char buf[20];
   memset(buf,0,20);
   sprintf(buf,"x=%d,y=%d",x,y);
   TextOut(hdc,0,0,buf,strlen(buf));
   ReleaseDC(hwnd,hdc);
}*/