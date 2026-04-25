#include <stdio.h>
int main()
{
    int d,y,m,w;
    printf("Enter days: ");
    scanf("%d", &d);
  
    y = (d / 365);
    m = (d % 365) / 30;
    w = ((d % 365) % 30) / 7;
    d = ((d % 365) % 30) % 7;
    
   
    printf("\n YEARS: %d\n", y);
    printf("MONTHS: %d\n", m);
    printf("WEEKS: %d\n", w);
    printf("DAYS: %d\n", d);
   
    return 0;
}
