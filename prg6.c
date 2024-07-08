#include<stdio.h>
#include<conio.h>
int main()
{
int n,sum=0,d,num;

printf("enter any number:");
scanf("%d",&n);
num=n;
while(n>0)
 {
 d=n%10;
 sum=sum+(d*d*d);
 n=n/10;
 }
 if(num==sum)
 printf("\n number is armstrong=%d",num);
 else
 printf("\n number is not armstrong");

 }
