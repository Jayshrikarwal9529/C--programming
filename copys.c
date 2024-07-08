#include<stdio.h>
#include<conio.h>
int main()
{
 int i;
 char s1[10],s2[10];
 
 printf("enter the string:");
gets(s1);
for(i=0;s1[i]!='\0';i++)
  {
  s2[i]=s1[i];
 }
 s2[i]='\0';
 printf("\n copied string:%s",s2);

 }
