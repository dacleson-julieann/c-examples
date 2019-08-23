// c program to reverse a string using strrev() function

#include<stdio.h>
#include<string.h>

int main()
{
    char aj[1000];
    printf("\n\nstrrev(string): Function to reverse the string and storing in the same string.\n\n\n");
    printf("\n\nEnter the string: ");
    gets(aj);
    /*
        system defined function to reverse the string
        and storing in the same string
    */
    strrev(aj);
    printf("\n\nReverse of entered string is: %s", aj);

    return 0;
}
