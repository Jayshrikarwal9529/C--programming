#include<stdio.h>
#include<conio.h>
int main()
{
 int i,n,a[100],b[100];
 printf("Enter  limit");
 scanf("%d",&n);
 printf("Enter n number in array..");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 
 for(i=0;i<n;i++)
 {
   b[i]=a[i]*a[i];
 }
 printf("first array=");
 for(i=0;i<n;i++)
 printf("%d\t",a[i]);
 
 printf("Square array=");
 for(i=0;i<n;i++)
 printf("\n%d\t",b[i]);

}
