// Basic program to show use of nested for Loops

/*
nested loops are usually used to print a pattern in c. they are also used to print out
the matrix using a 2 dimensional array and a lot of the other patterns like pyramid
of numbers etc.

using a loop inside another loop is called nested loop
*/

#include<stdio.h>

int main()
{
  printf("\n\nNested loops are usually used to print a pattern in c.\n\n");
  printf("\n\nThey are also used to print out the matrix using a 2 dimensional array. \n\n");

  int i,j,k;
  printf("\n\nOutput of the nested loop is :\n\n");

  for(i = 0; i < 5; i++)
  {
    printf("\t\t\t\t");
    for(j = 0; j < 5; j++)
    printf("* ");
    printf("\n");
  }

  return 0;
}
