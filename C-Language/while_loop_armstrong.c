#include <stdio.h>

int main() {
    
    int n,r,c,sum=0;
    printf("Enter Number:");
    scanf("%d",&n);
    c=n;
    
    while(n>0)
    {
        r=n%10;
        sum+=r*r*r;
        n=n/10;
    }
    
    if(sum==c)
    {
        printf("%d is Armstrong.",c);
    }
    else
    {
        printf("%d is not a Armstrong.",c);
    }

    return 0;
}