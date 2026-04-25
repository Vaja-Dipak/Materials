//WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array

#include<stdio.h>
main()
{
	int a[2][3], b[2][3], i, j;
	
	for(i=0;i<2;i++)		//get first matrix value
	{
		for(j=0;j<3;j++)
		{
			printf("Enter matrix 1 [%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<2;i++)		//get second matrix value
	{
		for(j=0;j<3;j++)
		{
			printf("Enter matrix 2 [%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<2;i++)		//print first matrix
    {
    	for(j=0;j<3;j++)
    	{
    		printf("%d ",a[i][j]);
		}
		printf("\n");
    }
    printf("\n");
    
    for(i=0;i<2;i++)		//print second matrix
    {
    	for(j=0;j<3;j++)
    	{
    		printf("%d ",b[i][j]);
		}
		printf("\n");
    }
    printf("\n\n");
    
    
    printf("Addition of the matrix \n");
    for(i=0;i<2;i++)			//print addition of the matrix
    {
    	for(j=0;j<3;j++)
    	{
    		printf("%d  ",a[i][j] + b[i][j]);
		}
		printf("\n");
    }printf("\n");
    
    printf("Subtraction of the matrix \n");
    for(i=0;i<2;i++)			//print subtraction of the matrix
    {
    	for(j=0;j<3;j++)
    	{
    		printf("%d  ",a[i][j] - b[i][j]);
		}
		printf("\n");
    }printf("\n");
    
    printf("Multiplication of the matrix \n");
    for(i=0;i<2;i++)			//print multiplication of the matrix
    {
    	for(j=0;j<3;j++)
    	{
    		printf("%d  ",a[i][j] * b[i][j]);
		}
		printf("\n");
    }
}
