#include<stdio.h>
#include<conio.h>
int main()
{
float r,h,a,b;
printf("enter the redius and height:");
scanf("%f %f",&r,&h);
a=2*3.14*r*h+2*3.14*r*r;
b=3.14*r*r*h;
printf("\n surface area of cylinder=%f",a);
printf("\n volume of cylinder=%f",b);


}
