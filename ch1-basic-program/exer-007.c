// Program to check if input character is a vowel using Switch Case
#include<stdio.h>
int main()
{
  char ch;
  printf("Input a Character : ");
  scanf("%c", &ch);
  switch(ch)
  {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
      printf("\n\n%c is a vowel.\n\n", ch);
      break;
    default:
      printf("%c is not a vowel.\n\n", ch);
  }
  return 0;
}

/*
explanation:
if break statement is not used for a case then all the cases following the
valid case are executed and evaluated. This way you can make your code
easier to understand by writing only break statement only once to
check multiple conditions in one go.

default is exuecuted only if none of the above cases are true. it is similar
to the else statement of the if-else code.
*/
