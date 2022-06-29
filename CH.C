#include<stdio.h>
#include<conio.h>
void main()
{
     char ch;
     clrscr();

     printf("Enter ch :");
     scanf("%c",&ch);

     if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
     {
	printf("\n this is vowel :%c",ch);

     }
     else
     {
	printf("\n this is consonants :%c",ch);

     }
     getch();

}