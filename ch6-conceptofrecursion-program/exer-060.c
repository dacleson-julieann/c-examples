// c program to check lowercase using islower() function

/*
in this program we will check whether a character is in lowercase or not. we will be using a system
defined function islower90 defined under the ctype.h library. This method is used for various valid
password checking options where atleast one lowercase character is mandatory.

the function return 0 for any character which is not is lowercase, and it returns a value greater
than or equal to 1 if the character is lower case.
*/

#include<stdio.h>
#include<ctype.h>

int main()
{
    /*
        As datatypes are int, hence all the variables store
        the ASCII values of the character on the rhs
    */
    int var1 = 'D';
    int var2 = '2';
    int var3 = 'a';
    int var4 = ' ';

    printf("Range of ASCII values of lowercase character is 97 to 122\n\n");
    /*
        Returns true if the input parameter is an ASCII value
        within the range of a lowercase alphabet
    */
    if(islower(var1))
    {
        printf("\n var1 = |%c| is lowercase character\n", var1);
    }
    else
    {
        printf("\nvar1 =|%c| is not lowercase character\n", var1);
    }

    if(islower(var2))
    {
        printf("\n var2 = |%c| is lowercase character\n", var2);
    }
    else
    {
        printf("\nvar2 =|%c| is not lowercase character\n", var2);
    }

    if(islower(var3))
    {
        printf("\n var3 = |%c| is lowercase character\n", var3);
    }
    else
    {
        printf("\nvar3 =|%c| is not lowercse character\n", var3);
    }

    if(islower(var4))
    {
        printf("\n var4 = |%c| is a lowercase character\n", var4);
    }
    else
    {
        printf("\nvar4 =|%c| is not a lowercase character\n", var4);
    }

    return 0;
}
