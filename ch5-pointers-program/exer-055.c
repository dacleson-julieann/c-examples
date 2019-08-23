// basic c program to concatenate strings using pointer

#include <stdio.h>

int main()
{
    char aa[100], bb[100];

    printf("\nEnter the first string: ");
    gets(aa);   // inputting first string

    printf("\nEnter the second string to be concatenated: ");
    gets(bb);   // inputting second string

    char *a = aa;
    char *b = bb;

    // pointing to the end of the 1st string
    while(*a)   // till it doesn't point to NULL-till string is not empty
    {
        a++;    // point to the next letter of the string
    }
    while(*b)   // till second string is not empty
    {
        *a = *b;
        b++;
        a++;
    }
    *a = '\0';  // string must end with '\0'
    printf("\n\n\nThe string after concatenation is: %s ", aa);

    return 0;
}

/*
explanation:

in char *a = aa; , a is a pointer to a char array and stores the base address of the aa.
in char *b = bb; , b is a pointer to a char array and stores the base address of the bb.
and *a = *b; is storing the base address of second at the end of the first.

*/
