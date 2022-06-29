#include<stdio.h>
#include<conio.h>
void main()
{
	float a,h,d,t;
	clrscr();
	printf("Enter value of salary :");
	scanf("%f",&a);

	if(a<=5000)
	{
		h=(a*0.08);
		d=(a*0.20);
		t=(a+h+d);
		printf("\n gross salary by hra : %f",h);
		printf("\n gross salary by da : %f",d);
		printf("\n total salary : %f",t);

	}
	else if(a>5000 && a<=10000)
	{
		h=(a*0.12);
		d=(a*0.30);
		t=(a+h+d);
		printf("\n gross salary by hra : %f",h);
		printf("\n gross salary by da : %f",d);
		printf("\n total salary : %f",t);

	}
	else if(a>10000 && a<=15000)
	{
		h=(a*0.15);
		d=(a*0.40);
		t=(a+h+d);
		printf("\n gross salary by hra : %f",h);
		printf("\n gross salary by da : %f",d);
		printf("\n total salary : %f",t);

	}
	else
	{
		h=(a*0.20);
		d=(a*0.50);
		t=(a+h+d);
		printf("\n gross salary by hra : %f",h);
		printf("\n gross salary by da : %f",d);
		printf("\n total salary : %f",t);

	}
	getch();

}
