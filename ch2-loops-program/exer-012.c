// Basic for Loop Program

/*
every loop consist of three parts in a sequence
1. initialization: use to initialize the loop variables
2. condition: it is checked after each iteratio as an entry point to the loops
3. updation: incrementing the loop variable to eventually terminate the loop
not satisfying the loop condition.


syntax:
fpr(initialization, condition, incrementation)
{
  code statement;
}
*/
#include<stdio.h>
int main()
{
  /*
  Always declare the variables before using them
  */
  int i = 0; // declaration and initialization at the same time
  for(i = 0; i < 10; i++)
  {
    printf("i = %d\n", i);
  /*
  consequently, when i equals 10, the loop breaks.
  i is updated before the condition is checkedhence
  the value of i after exiting the loop is 10
  */
  }

  printf("\n\nThe value of i after exiting the loop is %d\n\n", i);
  printf("\nRemember that the loop condition checks the conditional statement before it loops again.\n\n");
  printf("Consequently, when i equals 10, the loop breaks.\n\n");
  printf("i is updated before the condition is checked- hence the value of i after exiting the loop is 10 .\n\n");

  return 0;
}
