#include<stdio.h>
#include<conio.h>
int main()
{
int a[10][10],r,c,i,j;
printf("enter the rows and cols:");
scanf("%d%d",&r,&c);
for(i=0;i<r;i++)
for(j=0;j<c;j++)
scanf("%d",&a[i][j]);
printf("\n diagonal matrix:");
 for(i=0;i<c;i++)
 {
 for(j=0;j<r;j++)
 {
  if(i==j)
 printf("%d\t",a[i][j]);
 }
 printf("\n");
 }

 }
