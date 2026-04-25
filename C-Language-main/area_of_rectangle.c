#include <stdio.h>

int main() {
    
    int l,w,a;
    printf("Enter Rectangle Length:");
    scanf("%d",&l);
    printf("Enter Rectangle Width:");
    scanf("%d",&w);
    
    a=l*w;
    printf("Area of Rectangle = %d",a);

    return 0;
}