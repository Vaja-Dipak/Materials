#include <stdio.h>

int main() {
    char ch;
	printf("enter any Character :");
	scanf("%c",&ch);
	if
	((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
	{
		printf("%c is Alphabet",ch);
	}
	else if(ch>='0'&&ch<='9')
	{
		printf("%c is Digit",ch);
	}
	else
	{
		printf("%c is Special character");
	}
     return 0;
}