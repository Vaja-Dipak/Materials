#include <stdio.h>

int main() {
    
    int n,i,j;
    int t[100];
    printf("Please Enter a Number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	printf("Enter the value : ");
    	scanf("%d",&t[i]);
	}
	for(j=0;j<n;j++)
	{
		printf("This is your table of %d",t[j]);
		for(i=1;i<=10;i++)
    	{
	        printf("%d X %d = %d \n",t[j],i,t[j]*i);
    	}		
    	printf("----------------\n");
	}
    return 0;
}
