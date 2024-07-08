#include<stdio.h>
#include<conio.h>
int main()
{
int hm,am,a,ch,b,temp;

printf("enter the any number:");
scanf("%d%d",&a,&b);
printf("\n menu:");
printf("\n 1- swap two variables \n2-arithmatic and harmonic mean of two numbers");
printf("\n enter choice:");
scanf("%d",&ch);
switch(ch)
{
 case 1: temp=a;
	 a=b;
	 b=temp;
	 printf("\n swap the value of a=%d and b=%d",a,b);
	 break;
 case 2: am=a+b/2;
	 hm=a/b*a+b;
	 printf("\n harmonic mean=%d",hm);
	 printf("\n arithmatic mean=%d",am);
	 break;
 case 3: printf("\n invalide choice");
 }


}
