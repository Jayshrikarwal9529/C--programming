#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,s=0;

printf("enter any number:");
scanf("%d",&n);
for(i=1;i<n;i++)
{
 if(i%2==0)
 s=s+i;
 }
 if(s==n)
 printf("\n number is perfect:");
 else
 printf("\n number is not perfect:");

 }
