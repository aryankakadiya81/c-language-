#include<stdio.h>
void test()
{
    printf("\n inside test");
}
int main()
{
    printf("\n before test");
    test();
    printf("\n after test");
    return 0;
}