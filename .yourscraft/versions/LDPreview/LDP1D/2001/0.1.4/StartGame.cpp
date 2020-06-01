#include<ColorText.h>
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
int main(int argc,char** argv)
{
	char** map=argv;
	menuselect("",map,0,argc-1,"");
	printf("Press any key to continue...");
	_getch();
	return 0;
}
