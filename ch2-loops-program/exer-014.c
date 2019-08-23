// Basic do while Loop Program

#include<stdio.h>
int main()
{
  /*
  always declare the variables before using them
  */
  int i = 10; // declaration and initialization at the same time
  do // do contains the actual code and the updation
  {
    printf("i = %d\n",i);
    i = i-1; // updation
  }
  // while loop doesn't contain any code but just the condition
  while(i > 0);
    printf("\nThe value of i after exiting the loop is %d\n\n", i);

  return 0;
}
