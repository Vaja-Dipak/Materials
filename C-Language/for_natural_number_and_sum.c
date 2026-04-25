#include <stdio.h>

int main() {
    
    int i,n,sum;
    printf("Enter Number to print Natural Number : ");
    scanf("%d",&n);
    
    printf("The first %d Natural Numbers are\n",n);
    for(i=1;i<=n;i++)
    {
        printf("%d \n",i);
        sum+=i;
    }
    
    printf("Sum of The All Natural Number is = %d",sum);

    return 0;
}