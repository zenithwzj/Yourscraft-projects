#include<ColorText.h>
int main(int argc,char** argv)
{
	char** map=argv;
	menuselect("",map,0,argc-1,"");
	printf("Press any key to continue...");
	_getch();
	return 0;
}
