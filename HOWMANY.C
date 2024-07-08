//Accept n number in array and accept num to count how many times number
//is number in the array
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
 int a[100],i,n,num,cnt=0;
  printf("Enter limit...");
  scanf("%d",&n);
  printf("Enter number in array...");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  printf("Enter num to count how many many times in present in array..");
  scanf("%d",&num);
  for(i=0;i<n;i++)
  {
    if(a[i]==num)
    cnt++;
  }
  printf("Number is present %d times",cnt);

 }
