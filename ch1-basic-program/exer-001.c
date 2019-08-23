// program to take input of various datatypes in C

/*
printf() is used to display text onto the screen
&	is used to assign the input value to the variable and store it at that particular location
scanf() is used to take input from the user using format specifier discussed upcoming tutorials
%d and %i both are used to take numbers as input from the user
%f is the format specifier to take float as input from the user
%s is the format specifier to take character as input from the user.
*/

#include<stdio.h>

int main()
{
	int num1, num2;
	float fraction;
	char character;

	printf("Enter two numbers number\n");

	// Taking integer as input from user
	scanf("%d%i", &num1, &num2);
	printf("\nThe two numbers You have entered are %d and %i\n", num1, num2);

	// Taking float or fraction as input from the user
	printf("\nEnter a Decimal number\n");
	scanf("%f", &fraction);
	printf("\nThe float or fraction that you have entered is %f\n", fraction);

	// Taking Character as input from the user
	//printf("\nEnter a Character\n");
	//scanf("%c",&character);
	//printf("\nThe character that you have entered is %c", character);

	return 0;
}
