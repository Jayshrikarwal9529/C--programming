#include<stdio.h>
#include<conio.h>
int main()
{
int ch;
float area,r,circum,volume;
printf ("enter any radius:");
scanf("%f",&r);
printf("\n menus:");
printf("\n 1- area of circle \n 2- circumference of circle \n 3-volume of sphere");
printf("\n enter choice:");
scanf("%d",&ch);
switch(ch)
{
 case 1:area =3.14*r*r;
 printf("\n area of circle:%f",area);
 break;
 case 2:circum=2*3.14*r;
   printf("\n circumferance of circle:%f",circum);
   break;
 case 3: volume=4/3*r*r*r;
    printf("\n volume of sphere:%f",volume);
    break;
 case 4: printf("\n invalide choice");
 break;
 }
}
