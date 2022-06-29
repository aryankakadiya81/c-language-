// covert alphabet
#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	printf("Enter ch :");
	scanf("%c",&ch);

	if(ch<=90)
		printf("%c",ch+32);

	else
		printf("%c",ch-32);

	getch();




}