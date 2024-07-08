#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
 char a[100][100],name[50];
 int i,n,num,flag=0;
  printf("Enter limit...");
  scanf("%d",&n);
  printf("Enter name in array...");
  for(i=0;i<n;i++)
  scanf("%s",&a[i]);
  printf("%s",a[i]);
  printf("Enter name to search..");
  scanf("%s",&name);
  for(i=0;i<n;i++)
  {
    if(strcmp(a[i],name)==0)
     {
       flag=1;
       break;
     }
   }
   if(flag==1)
     printf("Name is found...");
   else
     printf("Name is not found...");

 }
