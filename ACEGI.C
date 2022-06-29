#include<stdio.h>
#include<conio.h>
void main()
{
	char i;
	clrscr();
	for(i=1;i<=24;i+=4)
	{
		if(i%2==1)
		printf(" %c  %c ",i+64,i+98);

	}
	getch();
}