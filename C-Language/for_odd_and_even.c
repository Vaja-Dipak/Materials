#include <stdio.h>

int main() {
    
    int i,n;
    printf("Enter value for print odd and even : ");
    scanf("%d",&n);
    
    printf("Even Numbers.\n");
    for(i=1;i<=n;i+=2)
    {
        printf("%d \n",i);
    }
    
    printf("Odd Numbers.\n");
    for(i=2;i<=n;i+=2)
    {
        printf("%d \n",i);
    }

    return 0;
}