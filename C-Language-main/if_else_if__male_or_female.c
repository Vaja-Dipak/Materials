#include <stdio.h>

int main() {
    char gnd;
    printf("Enter F for Female,M for Male and O for Other :");
    scanf("%c",&gnd);
    if(gnd=='f'||gnd=='F')
    {
          printf("Entered gender is Female");
     }
     else if (gnd=='m'||gnd=='M')
     {
          printf("Entered gender is Male");
     }
     else if(gnd=='o'||gnd=='O')
     {
          printf("Entered gender is Other");
     }
     else
     {
          printf("Please give the right Input");
     }
     return 0;
}