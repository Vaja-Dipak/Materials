// Write a program of structure employee that provides the following 
// information -print and display empno, empname, address and age  

#include<stdio.h>
struct employee
{
	int empno;
	char empname[10], address[10];
}
main()
{
	int age;
	struct employee e;
	printf("Enter Employee No. : ");
	scanf("%d",&e.empno);
	printf("Enter Employee Name : ");
	scanf("%s",&e.empname);
	printf("Enter Your Address : ");
	scanf("%s",&e.address);
	printf("Enter Your Age : ");
	scanf("%d",&age);

	printf("\n Employee Number : %d",e.empno);
	printf("\n Employee Name : %s",e.empname);
	printf("\n Address : %s",e.address);
	printf("\n Age : %d",age);
}
