#include<stdio.h>
#include<conio.h>
int main()
{
 int i,c1=0;
 char s1[10];

 printf("enter the string:");
gets(s1);
for(i=0;s1[i]!='\0';i++)
  {
if(s1[i]=='a'||s1[i]=='A'||s1[i]=='e'||s1[i]=='E'||s1[i]=='o'||s1[i]=='O'||s1[i]=='i'||s1[i]=='I'||s1[i]=='u'||s1[i]=='U')
      c1++;
 }

 printf("\n occurances of string:%d",c1);

 }
