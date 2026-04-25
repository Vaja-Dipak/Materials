// WAP Find out length of string without using inbuilt function

#include<stdio.h>
main()
{
	char name[50];
	int i,len=0;
	
	printf("Enter any string : ");
	gets(name);
	
	for(i=0;name[i]!='\0';i++)
	{
		len++;
	}
	printf("Size of this string is : %d",len);
}
