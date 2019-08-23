// c program to find length of a string without strlen() Function
#include<stdio.h>

int main()
{

    char aj[1000];
    int i = 0;

    printf("\n\nEnter the string: ");
    gets(aj);

    // \0 marks the end of the string
    for(i = 0; aj[i] != '\0' ;i++);   // updation is done after checking condition

    printf("\n\nThe length of the input string is :  %d", i);

    return 0;
}

/*
Explanation:

You must be wondering why we have not added any statement to our for loop.
It's because we are traversing our string until we encounter \0 and are
doing i++ every time, hence we do not have to do anything else inside
the loop, as the value of i will be equal to the length of the string
by the time we encounter the \0 character.

*/
