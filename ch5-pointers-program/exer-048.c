// program for dynamic memory allocation using malloc()

#include<stdio.h>

int main()
{
  int n, i, *ptr, sum = 0;

  printf("\n\nEnter number of elements: ");
  scanf("%d", &n);

  // dynamic memory allocation using malloc()
  ptr = (int *) malloc(n*sizeof(int));

  if(ptr == NULL)
  {
    printf("\n\nError! Memory not allocated\n");
    return 0;
  }

  printf("\n\nEnter elements of array: \n\n");
  for(i = 0; i < n; i++)
  {
    // storing elements at contigous memory locations
    scanf("%d", ptr+i);
    sum = sum + *(ptr + i);
  }

  // printing the array elements using pointer to the locations
  printf("\n\nThe elements of the array are: ");
  for(i = 0; i < n; i++)
   {
       printf("%d  ",ptr[i]);    // ptr[i] is same as *(ptr + i)
   }

   /*
       freeing memory of ptr allocated by malloc
       using the free() method
   */
   free(ptr);

   return 0;
}
