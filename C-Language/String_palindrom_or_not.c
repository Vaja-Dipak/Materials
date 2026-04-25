// WAP to reverse a string and check that the string is palindrome or not

#include<stdio.h>
main()
{
	char rev[20], nm[20];
	
	printf("Enter any string : ");
	gets(nm);
	strcpy(rev,nm);
	strrev(rev);
	
	if(strcmp(nm,rev)==0)
	{
		printf("\n This string is a Palindrom.");
	}
	else
	{
		printf("\n This string is not a Palindrom.");
	}
}
