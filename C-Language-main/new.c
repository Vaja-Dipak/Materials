#include<stdio.h>
void main()
{
	int i,n,even=0,odd=0;
	printf("Enter Number :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			even+=i;
		}
		else
		{
			odd+=i;
		}
	}
	printf("Even = %d \n",even);
	printf("Odd = %d",odd);
}
