// Program to find Armstrong Number between 1 to 500

/*
an armstrong number or narcissistic number is a n digit number such that sum
of its digits raised to the nth power is equal to the number itself.

for example, let's take an armstrong number: 153, which is 3 digit number,
here 1^3 + 5^3 + 3^3 is  1 + 125 + 27 which is equal to 153
*/
#include<stdio.h>
#include<math.h>

int main()
{
  int n,sum,i,t,a;
  printf("\n\n\nThe Armstrong numbers in between 1 to 500 are :\n\n\n");
  for(i = 1; i <= 500; i++)
  {
    t = i; // as we need to retain the original number
    sum = 0;
  while(t != 0)
  {
    a = t%10;
    sum += a*a*a;
    t = t/10;
  }

  if(sum == i)
    printf("\n\t\t\t%d", i);
  }

  return 0;
}
