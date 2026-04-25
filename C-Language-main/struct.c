#include<stdio.h>
struct person
{
	//total size structure is 28 bytes
	int age;
	char name[20];
	float salary;
}
main()
{
	struct person p;
	printf("Ensert Age, name, salary : \n");
	scanf("%d %s %f",&p.age, &p.name, &p.salary);
	printf(" Age=%d \n name=%s \n salary=%f",p.age,p.name,p.salary);
}
