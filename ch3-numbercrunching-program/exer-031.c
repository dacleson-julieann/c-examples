// Program to check if input Number is int or float

/*
strlen() does not count the null character '\0'
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
  char number[10];
  int flag = 0;
  int length, i = 0;
  printf("\n\nEnter a number: ");
  scanf("%s", number);
  length = strlen(number);
  // till string does not end
  while(number[i++] != '\0') // same as while(length-->0)
  {
    if(number[i] == '.') // decimal point is present
    {
      flag = 1;
      break;
    }
  }
  // if(0) is same as if(false)
  if(flag)
    printf("\n\n\n\tEntered Number is a Floating point Number\n\n");
  else
    printf("\n\n\n\tEntered Number is a integer Number\n\n");


  return 0;
}
