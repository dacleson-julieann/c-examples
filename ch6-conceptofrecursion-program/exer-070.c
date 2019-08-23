// c program to copy string without strcpy() function

/*
What if you do not want to use the system defined function?

While initializing a string, there is no need to put a null character
at the end, as the compiler provides it automatically.

For example, char aj[] = "aditya"; is a correct statement.
 However while copying one string into another, terminating
 the destination string with a null character is mandatory, to use it in future.
*/

#include<stdio.h>

void stringCopy(char[], char[]);    // function prototype declaration

int main()
{
    char aj[100], mj[100];
    printf("\n\nEnter 1st string: ");
    gets(aj);
    stringCopy(aj, mj); // function call
    printf("\n\nThe copied string is: %s\n\n", mj);

    return 0;
}

void stringCopy(char a[], char b[]) // function definition
{
    int i = 0;
    while(a[i] != '\0')
    {
        b[i] = a[i];
        i++;
    }

    /*
        The string must always terminate with
        a '\0' - null character
    */
    b[i] =' \0';    // most important step
}
