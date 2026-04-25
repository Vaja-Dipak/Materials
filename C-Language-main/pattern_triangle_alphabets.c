#include<stdio.h>
main()
{
	int row,col,n=1;
	for(row=1;row<=5;row++)
	{
		for(col=1;col<=row;col++)
		{
			printf("%d ",n);
		}
		n++;
		printf("\n");
	}
}
