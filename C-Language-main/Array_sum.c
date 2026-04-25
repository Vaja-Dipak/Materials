#include<stdio.h>
main()
{
    int n[5]={5,6,7,8,9};
    int i,sum=0;

    for(i=0;i<5;i++)
    {
    	printf("%d, ",n[i]);
        sum+=n[i];
    }
    printf("\nSum = %d",sum);
}
