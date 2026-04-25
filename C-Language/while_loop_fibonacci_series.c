#include <stdio.h>

int main() {
    
    int n,i=1,a1=0,a2=1,a3;
    printf("Please Enter a Number:");
    scanf("%d",&n);
    
    printf("%d ,%d "a1 a2 );
    while(i<n)
    {
        a3=a1+a2;
        printf("%d ",a3);
        
        a1=a2;
        a2=a3;
        i++;
    }
    
    return 0;
}