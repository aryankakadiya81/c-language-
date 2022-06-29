#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a=1,n;
	clrscr();
	printf("Enter n :");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		 // printf(" \n %d",i);
	      //  printf(" * %d",a);
		printf("\n %d ",i*a);
		a+=a;
	}
	getch();
}