// pointer comparison in C

/*
in c language pointers can be compared if the two pointers are
pointing to the same array.

all relational operators can be used for pointer comparison, but a pointer cannot multipled or divided.
*/

#include <stdio.h>

int main()
{
    int *ptrA,*ptrB;

    ptrA = (int *)1;
    ptrB = (int *)2;

    if(ptr2 > ptr1)
        printf("PtrB is greater than ptrA");

    return(0);
}
