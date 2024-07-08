#include<stdio.h>
#include<conio.h>
int main()
{
 char i,j;
 int sp=-1;
 
 for(i='D';i>='A';i--)
  {
   for(j='A';j<=i;j++)
    printf("%c",j);
    if(i=='D')
    printf("\b");
     for(j=1;j<=sp;j++)
     printf(" ");
     for(j=i;j>='A';j--)
      printf("%c",j);

      printf("\n");
      sp=sp+2;
   }
   
 }
