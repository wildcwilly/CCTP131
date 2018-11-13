/* Module 2.2.10.2 Lab
Chris Wild

Check the program below. Find all possible compilation errors and logic errors. Fix them, but you may not change any numeric values.
Your version of the program must print the same result as the expected output. Before you use your compiler, try to find the errors only
by manual code analysis.

#include <stdio.h>

int main()
{
    int fourValue = 2 2 1;
    int fiveValue = 2 - 3;

    printf("The value of four is: %d\n", fourValue);
    printf("The value of five is: %d\n", fiveValue);

    return 0;
}

Example output
The value of four is: 4
The value of five is: 5
*/

#include <stdio.h>

int main(void)  /* add void */
{
    int fourValue = 2 + 2 * 1; /* add + between 2's and * in front of the 1. multiply by 1 won't change the value of 2 + 2 */
    int fiveValue = 2 + 3;  /* change - to + */

    printf("The value of four is: %d\n", fourValue);
    printf("The value of five is: %d\n", fiveValue);

    return 0;
}

/*
Actual output (copied from Console window)

The value of four is: 4
The value of five is: 5
*/