#include<stdio.h>
#include<conio.h>
void main ()
{
	int a;
	clrscr();
	printf("Enter a age :");
	scanf("%d",a);

	if(a>=18)
	{
		printf("person is eligible for voting : %d",a);

	}
	else

	{
		printf("person is not eligible for voting : %d",a);

	}
	getch();


}