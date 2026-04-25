#include<stdio.h>
main()
{
    int n[3][3];
    int i,j;

    for(i=0;i<3;i++)
    {
    	
    	for(j=0;j<3;j++)
    	{
    		printf("Enter the value [%d][%d]: ",i,j);
    		scanf("%d",&n[i][j]);
		}
		printf("\n");
    }
    
    
    for(i=0;i<3;i++)
    {
    	
    	for(j=0;j<3;j++)
    	{
    		printf("%d",n[i][j]);
		}
		printf("\n");
    }
    printf("--------------m2---------- \n");
    for(i=2;i>=0;i--)
    {
    	
    	for(j=2;j>=0;j--)
    	{
    		printf("%d",n[i][j]);
		}
		printf("\n");
    }
}
