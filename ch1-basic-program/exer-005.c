// Switch Case with break

/*
switch() can only contain char and int
break is used to exit from switch statement
switch case can be without default Case
another piece of information here is that a char variable is always initialized within '' single quotes
*/

#include<stdio.h>
int main()
{
  // Local Variable Definition
  char grade;
  printf("Enter your grade: \n");
  scanf("%c", &grade);

  switch(grade)
  {
    case 'A':
      printf("Excellent\n");
      printf("Your grade is %c\n", grade); // add here for complete run program
      break;
    case 'B':
      printf("Keep it up!\n");
      printf("Your grade is %c\n", grade);
      break;
    case 'C':
      printf("Well done\nbreak keyword takes execution to exit the switch case\n");
      printf("Your grade is %c\n", grade);
      break;
    case 'D':
      printf("You passed\n");
      printf("Your grade is %c\n", grade);
      break;
    case 'F':
      printf("Better luck next time\n");
      printf("Your grade is %c\n", grade);
      break;
    default:
      printf("Invalid grade\n");
  }

  //printf("Your grade is %c\n", grade);

  return 0;
}
