#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
 int a[100],i,n,pos;

 printf("Enter limit...");
 scanf("%d",&n);
 printf("Enter  n number in array...");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("array=");
 for(i=0;i<n;i++)
 printf("%d\t",a[i]);
 printf("\nEnter position into delete...");
 scanf("%d",&pos);
 for(i=pos-1;i<n;i++)
 {
     a[i]=a[i+2];
 }
 printf("\n After element deleted arrray  are=");
 for(i=0;i<n-1;i++)
 printf("%d\t",a[i]);

 }
