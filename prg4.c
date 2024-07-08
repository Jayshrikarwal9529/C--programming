#include<stdio.h>
#include<conio.h>
int main()
{
int n,rev=0,d,num;

printf("enter any number:");
scanf("%d",&n);
num=n;
while(n>0)
{
 d=n%10;
 rev=rev*10+d;
 n=n/10;
 }
 if(rev==num)
 printf("\n number is palindrome=%d",num);
 else
 printf("\n number is not palindrome",num);

 }
