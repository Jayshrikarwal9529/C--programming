#include<stdio.h>
#include<conio.h>
int main()
{
int n,sum,ldigit,fdigit;

printf("enter any number:");
scanf("%d",&n);
ldigit=n%10;
while(n>10)
{
n=n/10;
}
fdigit=n;
sum=fdigit+ldigit;
printf("\n sum of first and last digit %d",sum);

}
