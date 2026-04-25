#include <stdio.h>

int main() {
    
    int i,n,ans;
    printf("Enter Number to print Table : ");
    scanf("%d",&n);
    
    for(i=1;i<=10;i++)
    {
        ans=n*i;
        printf("%d X %d = %d \n",n,i,ans);
    }
    
    return 0;
}