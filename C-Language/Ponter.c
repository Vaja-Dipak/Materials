#include<stdio.h>
main()
{
	int a=10, b=20;
	int *p,*q;
	p=&a;
	q=&b;
	
	printf("The value of a is %d \n",a);
	printf("The value of a is %d \n",*p);
	printf("The value of a is %x \n",&a);	//value of hexadecimle value
	printf("The value of a is %x \n",p);
	printf("The value of a is %p \n",p);	//value of pointer form 
}
