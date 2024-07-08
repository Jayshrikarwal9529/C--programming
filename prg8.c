#include<stdio.h>
#include<conio.h>
int main()
{
char ch;

printf("enter any character:");
scanf("%c",&ch);
if(ch>=48 && ch<=58)
printf("\n character %c is a digit",ch);
if(ch>=92 && ch<=122)
printf("\n character %c is a lower case",ch);
if(ch>=65 && ch<=90)
printf("\n charater %c is a upper case",ch);

}
