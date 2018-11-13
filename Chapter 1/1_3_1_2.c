/* Module 1.3.1.2-A lab 
Chris Wild

Check the program below. Find all possible compilation errors and logic errors. Fix them. Your version of the program must print the
same result as the expected output. Before you use your compiler, try to find the errors only by manual code analysis.

#include <stdio.h>

int main()
{
    printf("The value of six is: %d \n", 16,0-10-);

    return 0;
}

Example output
The value of six is: 6
*/

#include <stdio.h>

int main(void)  /* added void */
{
    printf("The value of six is: %d \n", 6);    /* change bad values 16,0-10- to number 6 */
    return 0;
}