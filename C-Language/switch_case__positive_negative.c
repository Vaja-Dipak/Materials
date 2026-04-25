#include <stdio.h>

int main() {
    int num;
    printf("Enter Number :");
    scanf("%d",&num);
    switch(num>=0)
    {
        case 0:        
        printf("%d is Negative",num);
        break;
        
        case 1:
        printf("%d is Positive",num);
        break;
    }
    return 0;
}