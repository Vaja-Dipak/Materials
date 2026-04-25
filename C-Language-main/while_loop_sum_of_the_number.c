#include <stdio.h>

int main() {
    
    int n,i=1,sum=0;
    printf("Enter a Number:");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d \n",i);
        sum=sum+i;
        i++;
    }
    printf("Sum Of all the Number is = %d",sum);
    
    return 0;
}