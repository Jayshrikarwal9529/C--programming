#include<stdio.h>
#include<conio.h>
int main()
{
float l,h,b,area,surface;

printf("enter the length,bradth and height:");
scanf("%f %f %f",&l,&b,&h);
surface=2*l*b+l*h+b*h;
area=l*b*h;
printf("\n surface of cuboid=%f",surface);
printf("\n area of cuboid=%f",area);

}
