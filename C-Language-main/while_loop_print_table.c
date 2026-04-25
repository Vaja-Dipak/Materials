
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int n,a, i=1;
    printf("Please Enter a Number:");
    scanf("%d",&n);
    
    while(i<=10)
    {
        a=i*n;
        printf("%d X %d = %d \n",n,i,a);
        i++;
    }

    return 0;
}
