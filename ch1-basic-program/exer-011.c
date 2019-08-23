// Program to print the Largest and Smallest using Global Declaration

/*
some important points about Global variable declaration are:
it can be done anywhere within the program.
unlike local variables that can be used within the scope of a particular function
& is used to assign the input value to the variable and store it at that particular location

%0nd is used to represent numbers in n digit format with leading 0's
*/

#include<stdio.h>
int a,b;

int main()
{
  printf("\n\nEnter the two values to find the greatest and smallest number: \n");
  scanf("%d%d", &a, &b);

  if(a == b)
    printf("Both are equal\n");
  else if(a < b)
  {
    printf("\n\nThe largest number is %03d\n", b);
    printf("\nThe smallest number is %03d\n", a);
    printf("\nThe largest number is %03d\n", b);
  }
  else //Only possibility remaining
  {
    printf("The largest number is %03d\n", a);
    printf("The smallest number is %03d\n", b);
  }

  return 0;
}
