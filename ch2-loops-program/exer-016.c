// Program to print Factorial of a Number
#include<stdio.h>
#include<conio.h>

void main()
{
  int fact, i, n;
  fact = 1;
  printf("Enter the number\t");
  scanf("%d" , &n);
  for(i = 1; i <= n; i++)
  {
    fact = fact*i;
  }
  printf("Factorial of %d is %d", n , fact);

  getch();
}
