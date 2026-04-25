#include<stdio.h>
void add(num1,num2)
{
    int ans;
    ans=num1+num2;
    printf("%d",ans);
}
main()
{
    int num1,num2;
    printf("Enter two Numbers:");
    scanf("%d%d",num1,num2);
    add(num1,num2);
}