#include<stdio.h>
main()
{
    int n[5];
    int i,sum=0;

    for(i=0;i<5;i++)
    {
    	printf("Enter element %d:",i+1);
        scanf("%d",&n[i]);
        sum+=n[i];
    }
	
	for(i=0;i<5;i++)
    {
    	printf("%d \n",n[i]);
    }
    
    printf("Sum = %d",sum);
}
