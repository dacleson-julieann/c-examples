// c program for removing whitespaces in a string

#include<stdio.h>
#include<string.h>

int main()
{
    char aj[1000], mj[1000];
    int i = 0, j = 0, len;

    printf("\n\nEnter the string: ");
    gets(aj);

    len = strlen(aj);   // len stores the length of the input string

    while(aj[i] != '\0')    // till string doesn't terminate
    {
        if(aj[i] != ' ')  // if the char is not a white space
        {
            /*
                incrementing index j only when
                the char is not space
            */
            mj[j++] = aj[i];
        }
        /*
            i is the index of the actual string and
            is incremented irrespective of the spaces
        */
        i++;
    }
    mj[j] = '\0';
    printf("\n\nThe string after removing all the spaces is: %s", mj);

    return 0;
}
