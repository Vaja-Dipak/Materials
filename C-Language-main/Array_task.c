#include<stdio.h>
main()
{
	int n,i;
	int a[100],d2[100],d5[100],d10[100];
	
	printf("How many Numbers you can check : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter value value : ");
		scanf("%d",&a[i]);
	}
	
	printf("\n Your all values are there :");
	for(i=0;i<n;i++)
	{
		printf(" %d,",a[i]);
	}
	
	int j2=0,j5=0,j10=0;
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			d2[j2]=a[i];
			j2++;
		}
		
		if(a[i]%5==0)
		{
			d5[j5]=a[i];
			j5++;
		}
		
		if(a[i]%10==0)
		{
			d10[j10]=a[i];
			j10++;
		}
	}
	printf("\n\n Divide by 2  : ");
	for(i=0;i<j2;i++)
	{
		printf(" %d,",d2[i]);
	}
	
	printf("\n Divide by 5  : ");
	for(i=0;i<j5;i++)
	{
		printf(" %d,",d5[i]);
	}
	
	printf("\n Divide by 10 : ");
	for(i=0;i<j10;i++)
	{
		printf(" %d,",d10[i]);
	}
	
	
}
