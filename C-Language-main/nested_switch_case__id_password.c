#include <stdio.h>

int main() {
    int id,pw;
    printf("Enter your ID :");
    scanf("%d",&id);
    switch(id==123)
    {
        case 1:
        printf("Enter Your Password :");
        scanf("%d",&pw);
        switch(pw==456)
        {
            case 1:
            printf("Loged in succesfully.");
            break;
            
            default:
            printf("Incorrect Password");
            break;
        }
        break;
        
        default:
        printf("This Id is unavailable, Please Register.");
        break;
    }
    return 0;
}