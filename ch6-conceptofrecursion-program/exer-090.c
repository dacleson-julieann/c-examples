// c program to find GCD of two numbers using recursion

#include<stdio.h>

// declaring the recursive function
int find_gcd(int , int );

int main()
{
    int a, b, gcd;
    printf("\n\nEnter two numbers to find GCD of \n");
    scanf("%d%d", &a, &b);
    gcd = find_gcd(a, b);
    printf("\n\nGCD of %d and %d is: %d\n\n", a, b, gcd);

    return 0;
}

// defining the function
int find_gcd(int x, int y)
{
    if(x > y)
        find_gcd(x-y, y);

    else if(y > x)
        find_gcd(x, y-x);
    else
    return x;
}
