/* Module 1.3.1.5-A Lab
Chris Wild

Check the program below. Find all possible compilation errors and logic errors. Fix them. Your version of the program must print the
same result as the expected output. Before you use your compiler, try to find the errors only by manual code analysis.
Use hexadecimal (base 16) numbers.

#include <stdio.h>

int main()
{
    printf("The value of twenty-one is: %d \n", 0015);
    printf("The value of twenty-two is: %d \n", 0x1y);
    printf("The value of sixty-two is: %d \n", 0x3G);
    printf("The value of seventy-four is: %d \n", 0x44);

    return 0;
}

Example output
The value of twenty-one is: 21
The value of twenty-two is: 22
The value of sixty-two is: 62
The value of seventy-four is: 74
*/

#include <stdio.h>

int main(void)  /* add void */
{
    printf("The value of twenty-one is: %d \n", 0x15);  /* change 0015 to 0x15 (21 decimal)*/
    printf("The value of twenty-two is: %d \n", 0x16);  /* change 0x1y to 0x16 (22 decimal)*/
    printf("The value of sixty-two is: %d \n", 0x3e);   /* change 0x3G to 0x3e (62 decimal)*/
    printf("The value of seventy-four is: %d \n", 0x4A);/* change 0x44 to 0x4A (74 decimal)*/

    return 0;
}
