#include<stdio.h>
main()
{
	char name[20];
	printf("Enter your name :");
	gets(name);
	printf("\n Name = %s",name);
	
	printf("\n Uppercase = %s",strupr(name));
	printf("\n Lowercase = %s",strlwr(name));
	printf("\n Length = %d",strlen(name));
	printf("\n Reverse = %s",strrev(name));
}
