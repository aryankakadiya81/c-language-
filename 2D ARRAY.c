#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],i,j;
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\n enter a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
            printf("\n enter b[%d][%d] = ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t %d",a[i][j]);
            printf("\t %d",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}