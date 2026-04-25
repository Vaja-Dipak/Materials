// WAP to find maximum between two numbers using function
#include<stdio.h>
int max(a,b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
main()
{
	int a,b,maxnum;
	printf("Enter any two Numbers : \n");
	scanf("%d%d",&a,&b);
	max(a,b);
	maxnum=max();
	printf("%d is Maximum",maxnum);
}
