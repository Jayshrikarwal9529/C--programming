#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;

printf("enter the number:");
scanf("%d %d",&a,&b);
a=a^b;
b=a^b;
a=a^b;
printf("\n after swapping a=%d and b=%d",a,b);

}
