// Program to find Sum of N input Numbers using Array
#include<stdio.h>
int main()
{
  int n, sum = 0, c, array[100];

  printf("Enter the number of integers you want to add: ");
  scanf("%d", &n);

  printf("\n\nEnter %d integers \n\n", n);

  for(c = 0; c < n; c++)
  {
    scanf("%d", &array[c]);
    sum += array[c]; // same as sum = sum + array[c]
  }

  printf("\n\nSum = %d\n\n", sum);
  return 0;
}
