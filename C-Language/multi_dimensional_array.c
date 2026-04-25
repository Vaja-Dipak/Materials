#include<stdio.h>
main()
{
	int a[2][3]={2,3,5,8,7,6};
	int b[2][3]={5,3,7,9,4,5};
	int c[2][3];
	int row,col;
	
	printf("---first matrics--- \n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			printf(" %d ",a[row][col]);
		}
		printf("\n");
	}
	
	printf("---second matrics--- \n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			printf(" %d ",b[row][col]);
		}
		printf("\n");
	}
	printf("---addition of matrics--- \n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			printf(" %d ",c[row][col]=a[row][col] + b[row][col]);
		}
		printf("\n");
	}
}
