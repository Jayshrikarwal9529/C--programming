#include<stdio.h>
#include<conio.h>
int main()
{
int rs,one,five,ten;
printf("enter rupees:");
scanf("%d",&rs);
ten=rs/10;
rs=rs%10;
five=rs/5;
rs=rs%5;
one=rs/1;
rs=rs%1;
printf("\n ten rupees=%d",ten);
printf("\n five rupees=%d",five);
printf("\n one rupees=%d",one);

}
