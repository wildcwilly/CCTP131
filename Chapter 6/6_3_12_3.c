/* 6.3.12.3 Functions: part 3 - body
Chris Wild

Check the program below. Write a body of functions where indicated in order to obtain the correct result. The function
getMaxOfThreeshould return the largest number among three given numbers. Your version of the program must print the same result as
the expected output.

#include <stdio.h>

double getMaxOfThree(double paramA, double paramB, double paramC)
{
    *** your code ***
}

int main(void)
{
    double tenValue = getMaxOfThree(5, 9, 10);
    double bigValue = getMaxOfThree(555.4, 555.3, 556.4);

    printf("Ten: %.2f\n", tenValue);
    printf("Bigest value: %.2f\n", bigValue);

    return 0;
}

Example output

Ten: 10.00
Biggest value: 556.40
*/

#include <stdio.h>

double getMaxOfThree(double paramA, double paramB, double paramC)
{
    double max; /* variable to hold max value */

    /* set max value */
    if(paramA > paramB && paramA > paramC)
    {
        max = paramA;
    }
    else if(paramB > paramA && paramB > paramC)
    {
        max = paramB;
    }
    else
    {
        max = paramC;
    }

    return max;
}

int main(void)
{
    double tenValue = getMaxOfThree(5, 9, 10);
    double bigValue = getMaxOfThree(555.4, 555.3, 556.4);

    printf("Ten: %.2f\n", tenValue);
    printf("Bigest value: %.2f\n", bigValue);

    return 0;
}

/* Actual output (copied from console window)

Ten: 10.00
Bigest value: 556.40
*/