#include<stdio.h>
int recursion(int x)
{
	if(x>=1)
	{
		printf("welcome to recursion function \n");
		recursion(x-1);
	}
}
main()
{
	recursion(5);
}
