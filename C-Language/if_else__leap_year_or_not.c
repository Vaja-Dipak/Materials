#include<stdio.h>;
int main()
{
    int yr;
    printf("Enter Year :");
    scanf("%d",&yr);
    
    if(yr%4==0)
    {
        printf("This year is Leap year.");
    }
    else
    {
        printf("This year is not a Leap year.");
    }
    
    return 0;
}