#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,am,hm;

printf("enter two number:");
scanf("%d %d",&a,&b);
am=a+b/2;
hm=a*b/a+b;
printf("\n arithmatic mean=%d",am);
printf("\n harmonic mean=%d",hm);

}
