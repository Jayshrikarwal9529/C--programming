#include<stdio.h>
#include<conio.h>
int main()
{
int num;

printf("enter any number:");
scanf("%d",&num);
(num&1)? printf("%d is odd",num): printf("%d is even",num);

}
