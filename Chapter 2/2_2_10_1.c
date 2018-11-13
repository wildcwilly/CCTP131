/* Module 2.2.10.1 Lab
Chris Wild

Scenario
Check the program below. Find all possible compilation errors and logic errors. Fix them, but you may not change any numeric values.
Your version of the program must print the same result as the expected output. Before you use your compiler, try to find the errors only
by manual code analysis.

#include <stdio.h>

int main()
{
    float halfValue = 0.6 + 0.1;
    float piValue = 0.14159265 - 3 +;
    printf("The value of half is: %f\n", halfValue);
    printf("The value of Pi is: %f\n", piValue);

    return 0;
}

Example output

The value of half is: 0.500000
The value of Pi is: 3.141593
*/

#include <stdio.h>

int main(void)  /* add void */
{
    float halfValue = 0.6 - 0.1;    /* change + to - */
    float piValue = 0.14159265 + 3; /* remove +, change - to + */
    printf("The value of half is: %f\n", halfValue);
    printf("The value of Pi is: %f\n", piValue);

    return 0;
}

/*
Actual output (copied from Console window)

The value of half is: 0.500000
The value of Pi is: 3.141593

*/