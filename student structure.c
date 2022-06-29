#include<stdio.h>
#include<string.h>
struct student
{
    int rollno;
    char name[10];
    int m1,m2,m3,total;
    float per;
};
    
int main()
{
    int i;
    struct student st[5];
    printf("\nenter records of 2 students : ");
    
    for(i=0;i<2;i++)
    {
        printf("\nenter rollno = ");
        scanf("%d",&st[i].rollno);
        
        printf("enter name = ");
        scanf("%s",&st[i].name);
        
        printf("enter m1 = ");
        scanf("%d",&st[i].m1);
        
        printf("enter m2 = ");
        scanf("%d",&st[i].m2);
        
        printf("enter m3 = ");
        scanf("%d",&st[i].m3);
    }
    printf("\n student information list : ");
    for(i=0;i<2;i++)
    {   
        st[i].total=st[i].m1+st[i].m2+st[i].m3;
        st[i].per=(st[i].total)/3;
        
        printf("\nrollno = %d \nname = %s",st[i].rollno,st[i].name);
        printf("\ntotal = %d \nper = %f",st[i].total,st[i].per);
        
        if(st[i].per>81)
        {
            printf("\n %d grade A",st[i].rollno);
        }
        else if(60<st[i].per && st[i].per>=80)
        {
            printf("\n %d grade B",st[i].rollno);
        }
        else if(50<st[i].per && st[i].per>=60)
        {
            printf("\n %d grade C",st[i].rollno);
        }
        else if(35<st[i].per && st[i].per>=50)
        {
            printf("\n %d grade D",st[i].rollno);
        }
        else if(st[i].per<=35)
        {
            printf("\n %d grade F(Fail)",st[i].rollno);
        }
        
        
        
    }
    return 0;
}