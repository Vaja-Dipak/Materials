// WAP to check if the number is even or odd using function
#include<stdio.h>
int even_odd(n)
{
	if(n%2==0)
	{
		printf("%d is Even",n);
	}
	else
	{
		printf("%d is Odd",n);
	}
}
main()
{
	int n;
	printf("Enter Number : ");
	scanf("%d",&n);
	even_odd(n);
}
