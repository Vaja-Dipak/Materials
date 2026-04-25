#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character to check it Vowel or Constant :");
    scanf("%c",&ch);
    
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("This Character is Vowel.");
    }
    else
    {
        printf("This Character is  a Constant.");
    }
    
    return 0;
}