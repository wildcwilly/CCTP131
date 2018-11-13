/* Module 2.1.10.2 Lab
Chris Wild

Check the program below. Find all possible compilation errors and logic errors. Fix them. Your version of the program must print the
same result as the expected output. After you have fixed the errors, remove all unnecessary characters from the code. Check which
characters may be left without triggering an error. Before you use your compiler, try to find the errors only by manual code analysis.

#include <stdio.h>

int main()
{
    float tenValue = 10.000000;
    printf("The value of ten is: %f\n", 09.000);
    printf("The value of nine is: %f\n", tenValue0);

    return 0;
}

Example output

The value of nine is: 9.000000
The value of ten is: 10.000000
*/

#include <stdio.h>

int main()
{
    float tenValue = 10;    /* removed . and all trailing 0's with same result */
    
     /* remove preceding and all trailing 0's. Leaving decimal with no trailing 0 is not good for readability but works
        as instructed to "remove all unnecessary characters from the code". Change ten to nine for output to be correct */
    printf("The value of nine is: %f\n", 9.);
    
    /* remove 0 from variable spelling. Change nine to ten for output to be correct */
    printf("The value of ten is: %f\n", tenValue);

    return 0;
}

/*
Actual output (copied from Console window)

The value of nine is: 9.000000
The value of ten is: 10.000000
*/