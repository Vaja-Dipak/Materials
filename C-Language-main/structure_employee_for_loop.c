// Write a program of structure for five employee that provides the following 
// information -print and display empno, empname, address and age 

#include<stdio.h>
struct employee
{
	int empno,age;
	char empname[20], address[20];
}
main()
{
	
	int i;
	struct employee e;
	
	for(i=1;i<=5;i++)
	{
		printf("Insert details of employee number %d \n\n",i);
		printf("Enter Employee No. : ");
		scanf("%d",&e.empno);
		printf("Enter Employee Name : ");
		scanf("%s",&e.empname);
		printf("Enter Your Address : ");
		scanf("%s",&e.address);
		printf("Enter Your Age : ");
		scanf("%d",&e.age);
	
		printf("\n Employee Number : %d",e.empno);
		printf("\n Employee Name : %s",e.empname);
		printf("\n Address : %s",e.address);
		printf("\n Age : %d",e.age);
		
		printf("\n\n\n");
	}
}
