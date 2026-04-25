#include <stdio.h>
#include<stdbool.h>
int main()
{
    int food, qnt, price, amt, tot = 0;              // Declare all variables

    printf("****   Rajwadi Restaurant ****\n");             // one time print Heading
	
	bool status=true;									// Default boolean value set
    while(status)
    {                                                   // While loop start
        printf("----------   Menu   ----------\n");
        printf("1. Pizza      Price = 90rs/pcs \n");
        printf("2. Burger     Price = 50rs/pcs \n");
        printf("3. Dhosa      Price = 80rs/pcs \n");
        printf("4. Idli       Price = 40rs/pcs \n");
        printf("5. Sandwich    Price = 30rs/pcs \n");

        printf("\nPlease Enter your Choice... :");
        scanf("%d", &food);                                 // Get order from customer, using number

        switch (food)                                   // order print using switch case
        {
        case 1:
            printf("You have Selected Pizza.");
            price = 90;
            break;
        case 2:
            printf("You have Selected Burger.");
            price = 50;
            break;
        case 3:
            printf("You have Selected Dhosa.");
            price = 80;
            break;
        case 4:
            printf("You have Selected Idli.");
            price = 40;
            break;
        case 5:
            printf("You have Selected Sandwich .");
            price = 30;
            break;
        default:
            printf("Please Restart and Enter valid choice");
            break;
        }

        printf("\nEnter food quantity :");
        scanf("%d", &qnt);                                  // get food quantity from customer
        

        amt=price*qnt;                          // define the one menu total amount
        tot += amt;                             // define total bill amount
        
        printf("Amount = %d \n", amt);
        printf("Your Total Amount = %d \n\n", tot);
		
		char ord;
        printf("Do you want to place more Order..? yes=y & no=n :");
        scanf("%s", &ord);
        
        // after one order ask customer to can you more order or not
        // if a customer enter ‘y’ then print all the menu for next order, but enter ‘n’ to exit.
    	
		switch(ord)
    	{
    		case 'y':
    			status=true;
    			break;
    			
    		default:
    			status=false;
    			printf("... Thanks for Visit ...");
    			break;
		}
	}
    return 0;
}
