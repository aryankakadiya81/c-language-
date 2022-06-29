#include<stdio.h>
void dsum()
{
    int a,b;
    
    printf("\n enter value of a = ");
    scanf("%d",&a);
    printf("\n enter value of b = ");
    scanf("\n%d",&b);
    
    printf("\n a+b = %d",a+b);
    printf("\n");
}
int main()
{
    dsum(1);
    dsum(2);
    dsum(3);
    dsum(4);
    dsum(5);
}