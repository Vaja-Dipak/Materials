#include <stdio.h>

int main() {
    
    int a,b,c;
    printf("Enter Value1:");
    scanf("%d",&a);
    printf("Enter Value2:");
    scanf("%d",&b);
    
    c=a+b;
    printf("%d + %d = %d \n",a,b,c);
    
    c=a-b;
    printf("%d - %d = %d \n",a,b,c);
    
    c=a*b;
    printf("%d X %d = %d \n",a,b,c);
    
    c=a/b;
    printf("%d / %d = %d \n",a,b,c);
    
    return 0;
}