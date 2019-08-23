// c program to compare two strings using strcmp() function

/*
strcmp(a, b) returns 0 if both the strings a and b are exactly
same else returns -1.

It is case sensitive so 'ABC' and 'abc' are considered to be
different strings. It can be used with with strrev() function(function
to reverse a string) to check whether a given string is a Pallindrome or not.

*/

#include<stdio.h>
#include<string.h>    // for strcmp() function

int main()
{
    char aj1[100], aj2[100];
    int compare;

    printf("\n\nstrcmp(a,b) returns : 0 if both the strings are exactly same and -1 otherwise.\n\n\n");
    printf("\n\nstrcmp(a,b) is Case Sensitive.\n\n\n");

    printf("\n\nEnter 1st string: ");
    gets(aj1);

    printf("\n\nEnter 2nd string: ");
    gets(aj2);

    compare = strcmp(aj1, aj2);
    if(compare == 0)
        printf("\n\nBoth the strings are exactly same.\n\n");
    else
        printf("\n\nBoth the strings are different.\n");

    return 0;
}
