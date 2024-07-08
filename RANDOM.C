//create a random array accept num to search ,number is found then display
//the position of that number.
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
 int a[100],i,n,num;

  printf("Enter limit...");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  a[i]=rand()%100;
  printf("Random nuber are=");
  for(i=0;i<n;i++)
   printf("%d\t",a[i]);

   printf("Enter num to search...");
   scanf("%d",&num);
   for(i=0;i<n;i++)
   {
     if(a[i]==num)
     break;
   }
   if(i==n)
    printf("Number is not found ....");
   else
   printf("Number is found...");
  
}
