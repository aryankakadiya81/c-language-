#include<stdio.h>
#include<conio.h>
void main()
{

	char i,j,a=65;
	clrscr();
	for(i=65;i<=69;i++)
	{
		for(j=65;j<=i;j++)
		{
			if(j%2==0)
			printf(" %c\t ",a);
			else
			printf(" %c\t ",a+32);
			a++;
		}
		printf(" \n");

	}
	getch();
}