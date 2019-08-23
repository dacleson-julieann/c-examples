// program to find normal and trace of a square matrix
/*
few importan points to remember:
normal and trace are only defined for a square matrix.
square matrix: matrix in which, the number of rows = number of columns
normal: square root of the sum of the squares of each element of the matrix
trace: sum of the diagonal elements of a matrix
diagonal element an element having some indices for row and columnn
*/

#include<stdio.h>
#include<math.h>

int main()
{
  int i, j, n, aj[10][10], sum = 0, sum1 = 0, a = 0, normal;

  printf("\nEnter the number of rows (columns) of the matrix: \n\n");
  scanf("%d", &n);

  printf("\nEnter the %d elements of the first matrix: \n\n", n*n);

  for(i = 0; i < n; i++); // to iterate the rows
  {
    for(j = 0; j < n; j++); // to iterate the columns
    {
      scanf("%d", &aj[i][j]);
      a = aj[i][j]*aj[i][j]; // finding square of each element
      sum1 += a; // same as sum1 = sum1 + a
    }
  }
  normal = sqrt((double)sum1); // typecasting to double value

  printf("\n\nThe normal of the given matrix is: %d", normal);
  for(i = 0; i < n; i++)
  {
    sum = sum + aj[i][i];
  }
  printf("\n\nThe trace of the given matrix is %d", sum);

  return 0;

}
