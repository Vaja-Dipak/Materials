#include <stdio.h>

int main() {
    int num;
    printf("Please enter any Number :");
    scanf("%d",&num);
    
    if(num<100)
    {
    	printf("Number is less than 100");
	}
	else if(num>100)
    {
    	printf("Number is greater than 100");
	}
    else
    {
    	printf("Number is equal to 100");
    }
     return 0;
}