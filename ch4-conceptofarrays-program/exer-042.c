// program to check wheter given square matrix is symmetric or not

/*
few important points to remember

a square matrix is said to be symmetric if it is equal to it's transpose.
traspose of a matrix is achieved by exchanging indicces of rows and columns
transpose is only defined for a square matrix

*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
  int c, d, a[10][10], b[10][10], n, temp;\
  printf("\nEnter the dimension of the matrix: \n\n");
  scanf("%d", &n);

  printf("\nEnter the %d elements of the matrix: \n\n", n*n);
  for(c = 0; c < n; c++) // to iterate the rows
    for(d = 0; d < n; d++)
      scanf("%d", &a[c][d]);

  // finding transpose of a matrix and storing it in b[][]
  for(c = 0; c < n; c++) // to iterate the rows
    for(d = 0; d < n; d++) // to iterate the columns
      b[d][c] = a[c][d];

  // printing the original matrix
  printf("\n\nThe original matrix is: \n\n");
  for(c = 0; c < n; c++) // to iterate the rows
  {
    for(d = 0; d < n; d++) // to iterate the columns {
    {
      printf("%d\t", a[c][d]);
    }
  printf("\n");
  }

  // print the transpose of the entered matrix
  printf("\n\nThe Transpose matrix is: \n\n");
  for(c = 0; c < n; c++) { // to iterate the rows
    for(d = 0; d < n; d++) {
      printf("%d\t", a[c][d]);
    }
    printf("\n");
  }

  // checking if the original matrix is same as its Transpose
  for(c = 0; c < n; c++) // to iterate the rows
  {
    for(d = 0; d < n; d++) // to iterate the columns
    {
      /* even if they differ by a single element,
      the matrix is not symmetric */
      if(a[c][d] != b[c][d])
      {
        printf("\n\nMatrix is not symmetric\n\n");
        exit(0); // a system defined method to terminate the program
      }
    }
  }

  /* if the program is not terminated yet
  it means the matrix is symmetric */
  printf("\n\nMatrix is symmetric\n\n");

  return 0;
}
