#include <stdio.h>

int main() {
    
    int a,r,t,si;
    printf("Enter Amount:");
    scanf("%d",&a);
    printf("Enter Rate(in percentage):");
    scanf("%d",&r);
    printf("Enter Time(in Year):");
    scanf("%d",&t);
    
    
    si=a*r*t/100;
    printf("Simple Interest = %d",si);

    return 0;
}