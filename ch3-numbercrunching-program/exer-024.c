// Checking for Odd and Even Numbers using Bitwise Operator

/*
x&1 returns true if the LSB(least significant bit) of binary representation of an
integer x is 1. it returns false if the LSB or the right most bit in a binary
sequence is 0.
*/
#include<stdio.h>
int main()
{
  int x;
  for(x = 0; x <= 10; x++)
  {
    if(x&1) // if number is odd
      printf("\t\t\t%d is odd\n",x);
    else if(!(x&1)) // ! is used inside if to reverse the boolean value
      printf("\t\t\t%d is even\n",x);
  }

  return 0;
}
/*
we have used a simple for loop to input numbers and show how to use the Bitwise
operator. you can take input from user using scanf() and use the same
logic to find if the input number is odd or even.
*/
