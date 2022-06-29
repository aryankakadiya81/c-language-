#include<stdio.h>
int main()
{
    FILE *fp;
    char buff[255];
    
    fp = fopen("skill.txt","a");
    
    while(fscanf(fp,"%s",buff)!=EOF)
    {
        printf("%s",buff);
    }
    fclose(fp);
    printf("\n\n %s",buff);
    
}