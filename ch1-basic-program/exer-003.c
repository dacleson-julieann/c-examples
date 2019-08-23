// How to use gets() function
/*
scanf() and gets() both are used to take input from the user.
scanf() can only take input until it encounters a space. The words after space are ignored by it
gets() is used to take a single input at a time but can be used to input a complete sentence with spaces unlike scanf()
*/

#include<stdio.h>

int main()
{
	char str[50]; // char array of size 50
	printf("Enter your complete name:\n\n\n");

	gets(str);
	printf("\n\nWelcome to C Programming %s\n\n\n", str);

	return 0;
}
