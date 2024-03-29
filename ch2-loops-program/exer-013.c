// Simple while Loop Program
/*
every loop consists of three parts in sequence
1. initialization: use to initialize the loop variables
2. condition: it is checked after each iteration as an entry point to the loop
3. updation: incrementing the loop variable to eventually terminate the loop not
satisfying the loop condition
*/
#include<stdio.h>
int main()
{
  /*
  always declare the variables before using them
  */
  int i = 0; // declaration and initialization at the same time
  printf("\nPrinting numbers using while loop from 0 to 9\n\n");
  /*
  while i is less than 10
  */
  while(i<10)
  {
    printf("%d\n",i);
    /*
    Update i so the condition can be met eventually
    to terminate the loop
    */
    i++; // same as i=i+1;
  }
  return 0;
}
