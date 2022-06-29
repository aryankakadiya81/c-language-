#include<stdio.h>
#include<conio.h>
void main()
{

	int i,j;
	clrscr();
	for(i=1;i<=25;i+=0)
	{
		for(j=1;j<=5;j++)
		{
			printf(" %d\t ",i++);
		}
		printf(" \n");

	}
	getch();
}