/* 6.6.11.1 Function parameters: part 1
Chris Wild

Write a function that computes the square of a given floating-point number and returns its value. Separate the declaration of the function
from its full definition. Write a code to test it with some values. Do not limit yourself only to those values we have given you.

#include <stdio.h>

*** your code ***

int main()
{
    *** your code ***

    return 0;
}

*** your code ***

Example output
square of 2.00 is 4.00
square of 6.00 is 36.00
square of 2.50 is 6.25
square of 12.12 is 146.89
square of 345.68 is 119493.29
*/

#include <stdio.h>

float square(float number);

int main()
{
    printf("square of %.2f is %.2f\n", 2.00, square(2.00));
    printf("square of %.2f is %.2f\n", 6.00, square(6.00));
    printf("square of %.2f is %.2f\n", 2.50, square(2.50));
    printf("square of %.2f is %.2f\n", 12.12, square(12.12));
    printf("square of %.2f is %.2f\n", 345.68, square(345.68));
    printf("square of %.2f is %.2f\n", 3.1415, square(3.1415));
    printf("square of %.2f is %.2f\n", 0.0, square(0.0));
    printf("square of %.2f is %.2f\n", 1.0, square(1.0));

    return 0;
}

float square(float number)
{
    /* return square of nmber */
    return number * number;
}

/* Actual output (copied from console window)

square of 2.00 is 4.00
square of 6.00 is 36.00square of 2.50 is 6.25
square of 12.12 is 146.89
square of 345.68 is 119494.66
square of 3.14 is 9.87
square of 0.00 is 0.00
square of 1.00 is 1.00
*/