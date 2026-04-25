#include <stdio.h>

int main() {
    
    int n,i=0;
    printf("Enter Number:");
    scanf("%d",&n);
    
    while(n>0)
    {
        n=n/10;
        i++;
    }
    printf("total Number = %d",i);

    return 0;
}