#include<stdio.h>

int main()
{
    char aj[1000];
    int c = 0;
    int count[26] = {0};    // initializing all the elements of array to 0

    printf("\n\nEnter the string :   ");
    gets(aj);

    while(aj[c] != '\0')
    {
        if(aj[c] >= 'a' && aj[c] <= 'z')
        {
            /*
                Incrementing the count of the letter in the array,
                converting its index within the range  0 to 25
            */
            count[aj[c] - 'a']++;
        }
        c++;
    }

    for(c = 0; c < 26; c++)
    {
        /*
             If the character appears in the input string
             atleast once
        */
        if(count[c] != 0)
        {
            printf("\n\t\t%c occurs %d times in the string, \n",c+'a' ,count[c]);
        }
    }


    return 0;
}
