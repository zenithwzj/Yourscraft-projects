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
int menuselect(const char* start,const char* menu[],unsigned int min,unsigned int max,const char* end)
{
	int select=1;
	bool bl=0;
	printf(start);
	for(int i = min;i<=max;i++)
	{
		highprint(menu[i],select==i);
		cout<<endl;
	}
	printf(end);
	while(1)
	{
		if(bl)
		{
			system("cls");
			printf(start);
			for(int i = min;i<=max;i++)
			{
				highprint(menu[i],select==i);
				cout<<endl;
			}
			printf(end);
		}
		bl=0;
		if(_kbhit())
		{
			bl=1;
			int ch=_getch();
			if(ch==72&&select!=min)
				select--;
			else if(ch==72&&select==min)
				select=max;
			else if(ch==80&&select!=max)
				select++;
			else if(ch==80&&select==max)
				select=min;
			else if(ch-'0'>=min&&ch-'0'<=max&&ch<='9'&&ch>='0')
				select=ch-'0';
			else if(ch==13)
				return select;
			else if(ch==8)
				return -1;
			else bl=0;
		}
	}
}
//Copyright (C) ZHRE Studio
