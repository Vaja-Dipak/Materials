#include <stdio.h>

int main()
{
    int week;
    printf("Enter Week Number between 1 to 7 :");
    scanf("%d",&week);
    switch(week)
    {
        case 1:
        printf("Monday");
        break;
        case 2:
		printf("Tuesday");
		break;
		case 3:
		printf("Wednesday");
		break;
		case 4:
		printf("Thursday");
		break;
		case 5:
		printf("Friday");
		break;
		case 6:
		printf("Saturday");
		break;
		case 7:
		printf("Sunday");
		break;
		default:
		printf("Please enter valid Number");
	}
    return 0;
}