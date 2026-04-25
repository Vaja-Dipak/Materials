// WAP to check if the number is positive or negative using function
int num(n)
{
	if(n<0)
	{
		printf("%d is Negetive.",n);
	}
	else
	{
		printf("%d is Positive.",n);
	}
}
main()
{
	int n;
	printf("Enter Number : ");
	scanf("%d",&n);
	num(n);
}
