// WAP to find out the max number from given array using function

#include<stdio.h>
int max(int n[])
{
	int i,max=n[0];
	
	for(i=0;i<5;i++)
	{
		
		if(n[i]>max)
		{
			max=n[i];
		}
	}
	printf("Max value in this list is : %d",max);
}

main()
{
	int i, n[5];
	
	for(i=0;i<5;i++)
	{
		printf("Enter value of array : ");
		scanf("%d",&n[i]);
	}
	max(n);
}
