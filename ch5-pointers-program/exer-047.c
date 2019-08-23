// basic program for pointers

/*
few important points to remember:
* is used to acces the value stored in the pointer variable.
& is used to store the address of a given variable

int *p is a pointer variable declaration where p is a pointer to an int variable
i.e. it stores the location of an integer

%x is a formal specifier to print hexadecimal value. It is usually used to print the location
*/

#include<stdio.h>

int main()
{
  int var = 24; // actual variable declaration
  int *p;

  p = &var; // storing address of int variable var in pointer p

  printf("\n\nAddress of var variable is: \n\n", &var);

  // address stored in pointer variable
  printf("\n\nAddress stored in pointer variable p is: %x", p);

  // access the value using the pointer variable
  printf("\n\nValue of var variable or the value stored at address p is %d", *p);

  return 0;
}
