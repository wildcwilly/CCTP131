/* Module 1.3.1.4-A lab 
Chris Wild

Check the program below. Find all possible compilation errors and logic errors. Fix them. Your version of the program must print the
same result as the expected output. Before you use your compiler, try to find the errors only by manual code analysis.
Use octal (base 8) numbers.

#include <stdio.h>
int main()
{
    printf("The value of nine is: %d \n", 01x);
    printf("The value of ten is: %d \n", 0x2);

    return 0;
}

Example output
The value of nine is: 9
the value of ten is: 10
*/

#include <stdio.h>

int main(void)
{
    printf("The value of nine is: %d \n", 011); /* change 01x to 011 (same as 9 in decimal) */
    printf("The value of ten is: %d \n", 012);  /* change 0x2 to 012 (same as 10 in decimal) */
    
    return 0;
}