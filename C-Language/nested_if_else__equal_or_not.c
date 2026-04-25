#include <stdio.h>

int main() 
{
    int num1,num2;
    printf("Enter num1 : ");
    scanf("%d",&num1);
    printf("Enter num2 : ");
    scanf("%d",&num2);
    
    if(num1!=num2)
    {
        if(num1>num2)
        {
            printf("%d is Gretar than %d",num1,num2);
        }
        else
        {
            printf("%d is Gretar than %d",num2,num1);
        }
    }
    else
    {
        printf("Both Number are Equel.");
    }

    return 0;
}