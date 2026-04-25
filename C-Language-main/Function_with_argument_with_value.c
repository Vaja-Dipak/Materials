#include<stdio.h>
int reverse(n)
{
	int r,rn=0;
	while(n>0)
	{
		r=n%10;
		rn=(rn*10)+r;
		n=n/10;
	}
	//printf("%d \n",rn);
	
	return rn;
}

main()
{
	int n,rev;
	printf("Enter Number to print reverse:");
	scanf("%d",&n);
	reverse(n);
	rev=reverse();
	printf("Reverse : %d",rev);
	
}
