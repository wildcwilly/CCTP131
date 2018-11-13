/* Module 2.1.10.3 Lab
Chris Wild

Check the program below. Find all possible compilation errors and logic errors. Fix them. Your version of the program must print the
same result as the expected output. Before you use your compiler, try to find the errors only by manual code analysis. Later, you can
use the constant value of Pi.

int main()
{
    float halfValue = 0.6;
    float piValue = 3.141 592 65;

    printf("The value of half is: %f/2\n", half Value);
    printf("The value of Pi is: %f\n", pi_Value);

    return 0;
}

Example output

The value of half is: 0.500000
The value of Pi is: 3.141593
*/

#include <stdio.h>  /* add missing include statement */

int main(void)  /* add void */
{
    float halfValue = 0.5;  /* correct 0.6 to 0.5 */
    float piValue = 3.14159265;   /* remove spaces */

    printf("The value of half is: %f\n", halfValue);   /* remove /2. remove space from variable name */
    printf("The value of Pi is: %f\n", piValue);    /* correct spelling of variable */

    return 0;
}

/*
Actual output (copied from Console window)

The value of half is: 0.500000
The value of Pi is: 3.141593
*/