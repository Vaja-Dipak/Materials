#include <stdio.h>

int main() 
{
    int num1,num2;
    printf("Enter num1 : ");
    scanf("%d",&num1);
    printf("Enter num2 : ");
    scanf("%d",&num2);
    
    if(num1==num2)
    {
        printf("num1 and num2 are equel.");
    }
    else
    {
        printf("num1 and num2 are not equel.");
    }

    return 0;
}