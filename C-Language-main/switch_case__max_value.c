#include <stdio.h>

int main() {
    int num1,num2,max;
    printf("Enter num1 :");
    scanf("%d",&num1);
    printf("Enter num2 :");
    scanf("%d",&num2);
    switch(num1>num2)
    {
        case 1:
        printf("%d is big",num1);
        break;
        
        case 0:
        printf("%d is big",num2);
        break;
    }
    return 0;
}