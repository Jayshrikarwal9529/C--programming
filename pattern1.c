#include<stdio.h>
#include<conio.h>
int main()
{
int i,j;
char ch='A';

for(i=3;i>=1;i--)
{
for(j=1;j<=i;j++)
 {
  printf("\t%c",ch);
  ch++;
  }
  printf("\n");
 }

}
