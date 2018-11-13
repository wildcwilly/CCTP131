/* 2.4.17.2 Lab
Chris Wild

Write a small program which prints the absolute value of a number only if the number is less than zero. Next it should print the value of
a given number. Print it on separate lines. Your program must print the same result as the expected output. Test it for several other cases
(positive numbers, other negative numbers etc.).

#include <stdio.h>

int main(void)
{
    int n = -3;
    *** your code ***

    return 0;
}

Example output

The absolute value of -3 is 3
The value of n is -3
*/

#include <stdio.h>

int main(void)
{
    int n = -3;
    int absoluteN;
    
    if(n < 0)   /* convert negative #'s to positive for absolute value */
    {
        absoluteN = n * -1;
    }
    if(n >= 0)  /* absolute value of 0 or positive number is number itself */
    {
        absoluteN = n;
    }
    
    printf("The absolute value of %d is %d\n", n, absoluteN);
    printf("The value of n is %d\n", n);
    
    return 0;
}

/* Actual output (Copied from console window)

The absolute value of -3 is 3
The value of n is -3

*************************************************************
Another way to write the same program and save an if statement (purpose of this exercise)

#include <stdio.h>

int main(void)
{
    int n = -3;
    int absoluteN = n;
    
    if(n < 0)   *** convert negative #'s to positive for absolute value ***
    {
        absoluteN *= -1;
    }

    printf("The absolute value of %d is %d\n", n, absoluteN);
    printf("The value of n is %d\n", n);
    
    return 0;
}
*/