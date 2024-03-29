// accessing array elements(traversing array) by incrementing a pointer

#include <stdio.h>

const int MAX = 3;  // Global declaration
int main()
{

	int var[] = {100, 200, 300};
    int i, *ptr;

    /*
        storing address of the first element
        of the array in pointer variable
    */
    ptr = var;

    for(i = 0; i < MAX; i++)
    {
        printf("\n\n\nAddress of var[%d] = %x ", i, ptr);
        printf("\nValue of var[%d] = %d ", i, *ptr);

       // move to the next location
        ptr++;
    }

    return 0;
}
