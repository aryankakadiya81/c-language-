#include<stdio.h>
int main()
{
   int a,b,ch1,ch2;
   
   printf("\n enter value of a = ");
   scanf("%d",&a);
   
   printf("\n enter value of b = ");
   scanf("%d",&b);
   
   printf("\n a=%d \t b=%d",a,b);
   printf("\n 1. Adition");
   printf("\n 2. Subtraction");
   printf("\n 3. Multiplication");
   printf("\n 4. Division");
   
   printf("\n Enter your 1st choice : ");
   scanf("%d",&ch1);
   printf("\n Enter your 2nd choice : ");
   scanf("%d",&ch2);
   
   switch(ch1)
   {
        case 1:
            printf("\n\n a+b = %d",a+b);
            break;
        case 2:
            printf("\n\n a-b = %d",a-b);
            break;
        case 3:
            printf("\n\n a*b = %d",a*b);
            break;
        case 4:
            printf("\n\n a/b = %d",a/b);
            break;
        case 5:
            printf("\n\n wrong! choice....");
            break;
   }
   
   switch(ch2)
   {
        case 1:
            printf("\n\n a+b = %d",a+b);
            break;
        case 2:
            printf("\n\n a-b = %d",a-b);
            break;
        case 3:
            printf("\n\n a*b = %d",a*b);
            break;
        case 4:
            printf("\n\n a/b = %d",a/b);
            break;
        case 5:
            printf("\n\n wrong! choice....");
            break;
   }
}
  