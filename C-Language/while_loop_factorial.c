#include <stdio.h>

int main() {
    
    int n,f=1,i=1;
    printf("Please Enter a Number:");
    scanf("%d",&n);
    
    while(i<=n)
    {
        f=f*i;
        i++;
    }
    printf("%d",f);

    return 0;
}