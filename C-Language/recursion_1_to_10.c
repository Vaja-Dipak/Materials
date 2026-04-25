#include<stdio.h>
int print_num(int x)
{
	if(x<=10)
	{
		printf("%d \n",x);
		print_num(x+1);
	}
}
main()
{
	print_num(1);
}
