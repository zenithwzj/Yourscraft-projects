//COLORHEADER
//AUTHOR:zenithwzj
//INCLUDED:enum color,void hprintf,void ColorText,#define cls,#define ColorTextMarco,int Menuselect
#include<iostream>
#include<cstring>
#include<windows.h>
#include<conio.h>
using namespace std;
enum COLORS
{BLACK,BLUE,GREEN,CYAN,RED,MAGENTA,BROWN,LIGHTGRAY,DARKGRAY,LIGHTBLUE,LIGHTGREEN,LIGHTCYAN,LIGHTRED,LIGHTMAGENTA,YELLOW,WHITE};
#define ColorTextMarco(fg,bg) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),fg+(bg<<4))
#define cls() system("cls")
void ColorText(int fg, int bg)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),fg+(bg<<4));
}
void hprintf(const char* Format,bool high)
{
	if(high)
		ColorText(BLACK,WHITE);
	cout<<Format;
	ColorText(WHITE,BLACK);
}
//Copyright (C) ZHRE Studio
