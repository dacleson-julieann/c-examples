// Swapping two Numbers using Bitwise Operator
#include<stdio.h>
#include<conio.h>
void main()
{
  int x = 6, y = 4;
  x = x^y;
  y = x^y;
  x = x^y;
  printf("x = %d and y = %d", x, y);
  getch();
}
