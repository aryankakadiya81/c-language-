#include<stdio.h>
void dsum(int a, int b)
{
    printf("\n a+b = %d",a+b);
    printf("\n");
}
int main()
{
    int a,b;
    printf("\n enter value of a = ");
    scanf("%d",&a);
    printf("\n enter value of b = ");
    scanf("%d",&b);
    dsum(a,b);
}