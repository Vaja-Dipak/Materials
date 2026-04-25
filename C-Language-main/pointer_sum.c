#include<stdio.h>
main()
{
	int a=20, b=50, c, *x, *y;

	x=&a;
	y=&b;
	
	c=*x + *y;
	printf("Sum of both value is : %d",c);
}
