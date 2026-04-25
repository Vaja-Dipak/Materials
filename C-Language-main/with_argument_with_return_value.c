#include<stdio.h>
int sum(int,int);
main()
{
	int a,b,result;
	printf("Enter two Number :");
	scanf("%d%d",&a,&b);
	result=sum(a,b);
	printf("The result is %d",result);
}
int sum(int a,int b)
{
	return a+b;
}
