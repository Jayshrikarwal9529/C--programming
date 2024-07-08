#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
 int i,n,flag=0;
 char a[20][20],name[20];
 printf("Enter limit: ");
 scanf("%d",&n);
 printf("Enter n student names..");
  for(i=0;i<n;i++)
 scanf("%s",a[i]);
 printf("Enter name to search...");
 scanf("%s",&name);
 for(i=0;i<n;i++)
 if(strcmp(a[i],name)==0)
  {
   flag=1;
   break;
  }
  if(flag==1)
   printf("name is found...");
  else
   printf("Name is not found...");

 }
