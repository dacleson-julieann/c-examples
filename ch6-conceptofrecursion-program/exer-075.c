// c gets() and strlen() Function
/*

1. Both scanf() and gets() are used to take input from user.
2. scanf() skips the input string after the first space is entered.
3. gets() is used to input a complete sentence with any desired
number of spaces until the Enter key is pressed.

*/

#include<stdio.h>
#include<string.h>

int main()
{
    char a[100];
    int length;

    printf("\n\nEnter a string you wish to calculate the length of :   ");
    /*
        to take a single string (including spaces)
        as input at a time
    */
    gets(a);
    /*
        Return the length of the string
        or the number of characters in the string
    */
    length = strlen(a);

    printf("\n\nThe length of the input string is: %d\n\n", length);

    return 0;
}
