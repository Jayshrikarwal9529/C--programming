#include<stdio.h>
#include<conio.h>
int main()
{
int a[10],i,n,sum=0;

printf("enter limit:");
scanf("%d",&n);
printf("\n enter the number:");
for(i=0;i<n;i++)

scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
if(a[i]%2!=0)
  sum=sum+a[i];
}
printf("\n sum odd number of=%d",sum);

}
