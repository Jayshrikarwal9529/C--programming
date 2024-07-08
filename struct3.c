#include<stdio.h>
struct emp
{
	int eno;
	char ename[20];
	float sal;
	
} e1[100];
int main()
{
	int i,n;
	printf("Enter limit:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter eno name sal:");
		scanf("%d%s%f",&e1[i].eno,&e1[i].ename,&e1[i].sal);
	}
	for(i=0;i<n;i++)
	
	{
		if(e1[i].sal>=50000)
	
	 {
		printf("\n Emp no=%d",e1[i].eno);
		printf("\n Emp name=%s",e1[i].ename);
		printf("\n Emp sal=%f",e1[i].sal);

	 } 
   }
}
