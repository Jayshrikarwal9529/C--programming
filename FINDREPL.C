#include<stdio.h>
#include<conio.h>
int main()
{
 int i,n,x,y,a[100];
 printf("Enter limit..");
 scanf("%d",&n);
 printf("Enter n number in array");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("ENter number to find");
 scanf("%d",&x);
 printf("ENter number to replace");
 scanf("%d",&y);
 for(i=0;i<n;i++)
  {
   if(a[i]==x)
    a[i]=y;
  }
 printf("Enter array:");
 for(i=0;i<n;i++)
 printf("%d\t",a[i]);
 
}
