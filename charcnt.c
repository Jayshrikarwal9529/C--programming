#include<stdio.h>
#include<conio.h>
int main()
{
 int i,cnt=0;
 char s1[10],ch;
 
 printf("enter the string:");
gets(s1);
printf("enter the charater:");
scanf("%c",&ch);
for(i=0;s1[i]!='\0';i++)

{
 if(s1[i]==ch)
 cnt++;
 }
 printf("\n charater count:%d",cnt);

 }
