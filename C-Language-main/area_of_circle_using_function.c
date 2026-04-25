// WAP to find the area of circle using function
#include<stdio.h>
int area_circle()
{
	int area,r;
	float pi=3.14;
	printf("Enter Radios on circle :");
	scanf("%d",&r);
	area=pi*r*r;
	return area;
}
main()
{
	int Area;
	area_circle();
	Area=area_circle();
	printf("Area of circle = %d",Area);
}
