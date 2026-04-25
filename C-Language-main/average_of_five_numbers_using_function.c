// WAP to find the average of five numbers using function
#include<stdio.h>
int avg(a,b,c,d,e)
{
	int avrg=(a+b+c+d+e)/5;
	printf("Average of the numers are = %d",avrg);
}
main()
{
	int a,b,c,d,e;
	printf("enter any five numbers : \n");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	avg(a,b,c,d,e);
}
