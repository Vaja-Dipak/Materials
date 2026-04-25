#include <stdio.h>

int main() {
    
    int n,r,i=1;
    printf("Enter Number:");
    scanf("%d",&n);
    
    while(i<=n)
    {
        if(n%i==0)
        {
            printf("%d ",i);
        }
        i++;
    }

    return 0;
}