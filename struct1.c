#include<stdio.h>
struct book
{
	 int bno,qty;
	 char bname[20];
	 float price;
	
}  b1;
int main()
{
	
	float t;
	printf("enter book no:");
	scanf("%d",&b1.bno);
	printf("enter book name:");
	scanf("%s",&b1.bname);
	printf("enter book price:");
	scanf("%f",&b1.price);
	printf("enter book quantity:");
	scanf("%d",&b1.qty);
	t=b1.price*b1.qty;
	
	printf("\nbook no=%d",b1.bno);
	printf("\nbook Name=%s",b1.bname);
    printf("\nbook price=%f",b1.price);
    printf("\nbook quanty=%d",b1.qty);
    printf("\ntotal=%f",t);
}
