#include<stdio.h>
int main()
{
    int category,subCategory;

    printf("_____Welcome to the Star Shop_____\n");
    printf("1. Electronics\n");
    printf("2. Clothing\n");
    printf("3. Stationary\n");
    printf("\n Enter your choice (1-4): ");
    scanf("%d", &category);
    switch (category) {
        case 1:
            printf(" You have selected Electronics.\n");
            printf("1. Mobile Phones\n");
            printf("2. Laptops\n");
            printf("3. TV\n");
            printf("\n Enter your choice (1-3): ");
            scanf("%d", &subCategory);
            switch (subCategory) {
                case 1:
                printf("\n You have selected Mobile Phones.\n");
                break;
                case 2:
                printf("\n You have selected Laptops.\n");
                break;
                case 3:
                printf("\n You have selected TV.\n");
                break;
                default:
                printf("\n Invalid choice for Electronics.\n");
                break;
            }
        break;
        case 2:
            printf("\n You have selected Clothing.\n");
            printf("1. Men's Clothing\n");
            printf("2. Women's Clothing\n");
            printf("\n Enter your choice (1-2): ");
            scanf("%d", &subCategory);
            switch (subCategory) {
                case 1:
                printf("\n You have selected Men's Clothing.\n");
                break;
                case 2:
                printf("\n You have selected Women's Clothing.\n");
                break;
                default:
                printf("\n Invalid choice for Clothing.\n");
                break;
            }
        break;
        case 3:
            printf("\n You have selected Stationary.\n");
            printf("1. Aducational related\n");
            printf("2. Business related\n");
            printf("\n Enter your choice (1-2): ");
            scanf("%d", &subCategory);
            switch (subCategory) {
                case 1:
                printf("\n You have selected Aducational related.\n");
                break;
                case 2:
                printf("\n You have selected Business related.\n");
                break;
                default:
                printf("\n Invalid choice for Stationary\n");
                break;
            }
        break;
        default:
            printf("\n Invalid category.\n");
            break;
    }
    return 0;
}
