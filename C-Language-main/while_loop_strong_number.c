#include <stdio.h>

int main() {
    
    int i,n,c,r,f,sum=0;
    printf("Enter Number:");
    scanf("%d",&n);
    c=n;
    while(n>0)
    {
        r=n%10;
        f=1;
        for(i=1;i<=r;i++)
        {
            f*=i;
        }
        n=n/10;
        sum+=f;
    }
    
    if(sum==c)
    {
        printf("%d is Strong Number.",c);
    }
    else
    {
        printf("%d is not a Strong Number.",c);
    }
    
    return 0;
}