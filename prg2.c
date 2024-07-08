#include<stdio.h>
#include<conio.h>
int main()
{
int n,d,c1=0,c2=0,c3=0;

printf("enter any number:");
scanf("%d",&n);
while(n>0)
{
 d=n%10;
 n=n/10;
 if(d==0)
 c1++;
 else if(d%2==0)
  c2++;
  else
  c3++;
  }
  printf("\n zero count=%d",c1);
  printf("\n even count=%d",c2);
  printf("\n odd count=%d",c3);

}
