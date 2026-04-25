#include<stdio.h>
int factorial()
{
    int n,i,f=1;
    printf("Enter Number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
main()
{
    int ans;
    ans=factorial();
    printf("Factorial = %d",ans);
}
