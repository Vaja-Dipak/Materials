// AP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)

#include<stdio.h>
main()
{
	int n,a,b,c;
	
	printf("Enter value of A : ");
	scanf("%d",&a);
	printf("Enter value of B : ");
	scanf("%d",&b);			
	printf("\n");
	
	printf("Keys / Process \n");
	printf(" 1.  Addition \n");
	printf(" 2.  Subtraction \n");
	printf(" 3.  Multiplication \n");
	printf(" 4.  Division \n\n");
	
	printf("Please enter process key : ");
	scanf("%d",&n);
	
	switch(n)
	{
	case 1:
		printf("\n Addition process Selected. \n");
		printf("%d + %d = %d",a,b,c=a+b);
		break;
		
	case 2:
		printf("\n Subtraction process Selected. \n");
		printf("%d - %d = %d",a,b,c=a-b);
		break;
		
	case 3:
		printf("\n Multiplication process Selected. \n");
		printf("%d * %d = %d",a,b,c=a*b);
		break;
		
	case 4:
		printf("\n Division process Selected. \n");		
		printf("%d / %d = %d",a,b,c=a/b);
		break;
		
	default:
		printf("Please enter valid key..!!");
		break;			
	}
}
