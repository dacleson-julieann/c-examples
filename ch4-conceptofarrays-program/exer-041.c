// program to check wheter a two dimensional array is a sparse matrix

#include<stdio.h>

int main()
{
  int n, m, c, d, matrix[10][10];
  int counter = 0;
  printf("\nEnter the number of rows and columns of the matrix\n\n");
  scanf("%d%d", &m, &n);

  printf("\nEnter the %d elements of the matrix \n\n", m*n);
  for(c = 0; c < m; c++) // to iterate the columns
  {
    for(d = 0; d < n; d++)
    {
      scanf("%d", &matrix[c][d]);
      if(matrix[c][d] == 0)
        counter++;
    }
  }

  // printing the matrix
  printf("\nThe entered matrix is: \n\n", m*n);
  for(c = 0; c < m; c++) // to iterate the rows
  {
    for(d = 0; d < n; d++)
    {
      printf("%d\t", &matrix[c][d]);
    }
  printf("\n"); // to take the control to the next row
  }

  // checking if the matrix is sparse or not
  if(counter > (m*n)/2)
    printf("\n\nThe entered matrix is a sparse matrix\n\n");
  else
    printf("\n\nThe entered matrix is not a sparse matrix\n\n");

  return 0;
}
