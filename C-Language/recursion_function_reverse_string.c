// WAP to find reverse of string using recursion  

#include<stdio.h>
int reverse(char *nm)
{
	if(*nm)
	{
		reverse(nm+1);
		printf("%c",*nm);
	}	
}
main()
{
	char nm[20];
	printf("Enter any string : ");
	gets(nm);
	reverse(nm);
	return 0;
}
