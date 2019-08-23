// program to access array of char pointers

/*
array of char pointers is used to access the complete string just the address of the first char(base address) of each string
*/

#include <stdio.h>
const int MAX = 4;  // Global declaration.

int main()
{

    char *names[] = {"Google", "Amazon", "Facebook", "Apple"}; // initializing an array(here names) of char pointers
    int i = 0;

    for(i = 0; i < MAX; i++)
    {
        printf("Value of names[%d] = %s\n\n", i, names[i]);
    }

    return 0;
}

/*
explanation:
printf("Value of names[%d] = %s\n\n", i, names[i]);

this statement is used for printing the complete name just using the pointer to the first character of each element of the names array
*/
