/* Module 1.3.1.1-A labs
Chris Wild

Check the program below. Find all possible compilation errors and logic errors. Fix them. Your version of the program must print the
same result as the expected output. Before you use your compiler, try to find the errors only by manual code analysis.

#include <stdio.h>

int main()
{
    printf("The value of five is: %d \n", 5int);

    return 0;
}

Example output
The value of five is: 5
*/

#include <stdio.h>

int main(void)  /* add void */
{
    printf("The value of five is: %d \n", 5);   /* remove int from 5int */
    return 0;
}