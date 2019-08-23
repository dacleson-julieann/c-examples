// Program to reverse the case of input character
/*
getchar() is similar to scanf()
islower() is system defined function under ctype.h header file to check if the character
is in lowercase or not.
toupper() converts the input parameter into equivalent uppercase character
putchar() is similar to printf()
*/

#include<stdio.h>
#include<ctype.h> // to use system defined function islower & toupper

int main()
{
  char alphabet;
  printf("Enter an alphabet : ");
  //putchar('\n'); // to move to next Line
  alphabet=getchar();
  printf("Reverse case of %c is : ",alphabet);

  if(islower(alphabet))
    putchar(toupper(alphabet));
  else
  // must be an uppercase character
  printf("%c",tolower(alphabet)) ;
  return 0;
}
