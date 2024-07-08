#include<stdio.h>
#include<conio.h>
int main()
{
 int i,cnt=0;
 char s1[10];
 printf("enter the string:");
gets(s1);
for(i=0;s1[i]!='\0';i++)
  {
  cnt++;
 }
 printf("\n length of string:%d",cnt);
 
 }
