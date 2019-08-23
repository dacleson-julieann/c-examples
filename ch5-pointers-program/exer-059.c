// null pointer program

/*
null pointer is a special reserved value of a pointer. a pointer
of any type has this reserved value. formally, each specific pointer type(int *, char *, etc)
has its own dedicated null-pointer value. conceptually, when a pointer has that null value it is not pointing anywhere

void pointer is a specific pointer type.

void * which is a pointer that points to some data location in storage, which doesn't have any specific type.

null pointer is a value whereas, void pointer is a type.
*/

#include<stdio.h>

int main()
{

    int *ptr = NULL;    // ptr is a NULL pointer

    printf("\n\n The value of ptr is: %x ", ptr);

    return 0;
}
