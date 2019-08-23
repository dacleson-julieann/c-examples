// ASCII value of character

/*
%c is the format specifier to take character as input
*/

#include<stdio.h>

int main()
{
	char c;
	printf("Enter a character : ");
	scanf("%c" , &c);
	printf("\n\nASCII value of %c = %d",c,c);

	return 0;
}
