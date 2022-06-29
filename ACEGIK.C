#include<stdio.h>
#include<conio.h>
void main()
{
	char i,n;
	clrscr();

	for(i=65;i<=90;i++)
	{
		if(i%2!=0)
		{
			printf(" %c ",i);
		}
	}
	getch();
}