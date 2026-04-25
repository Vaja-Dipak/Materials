#include<stdio.h>
void main()
{
	int n;
	
	printf("Enter Number to check, it divisible by 5 and 11 :");
	scanf("%d",&n);
	
	if (n%5==0 & n%11==0)
	{
		printf("%d is divide by '5' and '11'.");
	}
	else
	{
		printf("%d is Not divide by '5' and '11'.");
	}
	
	return 0;
}
