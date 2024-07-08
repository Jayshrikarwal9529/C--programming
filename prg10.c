#include<stdio.h>
#include<conio.h>
int main()
{
char ch;
printf("enter any character:");
scanf("%c",&ch);
if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
 printf("\n character is %c is a vowel",ch);
 else
 printf("\n character is %c is a consonant",ch);

 }
