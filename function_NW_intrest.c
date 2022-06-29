#include<stdio.h>
int sum()
{
    float a,b;
    printf("Enter Amount :");
    scanf("%f",&a);
    printf("Enter intrest rate :");
    scanf("%f",&b);
    return a * (b/100);
}
int main()
{
    float total;
    total  = sum();
    printf("total : %f",total);
    return 0;
}