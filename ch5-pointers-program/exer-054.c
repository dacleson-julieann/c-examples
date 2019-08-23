// basic C program for Pointer to a Pointer

/*
a pointer variable stores the address of a value. similarly, a pointer stores the address of the pointer variable.
pointer to a pointer is executed making use of **

int var; is a integer variable which stores value.

int *ptr; is an pointer variable which stores the address of an integer variable

int **pptr; is a pointer to a pointer variable which stores the address of a pointer variable
*/

#include<stdio.h>

int main()
{
    int var;
    int *ptr;
    int **pptr;

    var = 50;

    // take the address of the variable var
    ptr = &var;

    // taking the address of ptr using address of operator-&
    pptr = &ptr;

    // take the value using the pptr
    printf("\n\nValue of var = %d\n\n", var);

    printf("\n\nValue available at *ptr = %d\n\n", *ptr);

    printf("\n\nValue available at **pptr = %d\n\n", **pptr);

    return 0;
}
