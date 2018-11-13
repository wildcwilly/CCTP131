/* Lab 2.5.22.2
Chris Wild

Write a program which records two float values. Next, print the sum, the difference and the result of the multiplication of these two
values. Your version of the program must print the same result as the expected output.

#include <stdio.h>

int main()
{
    *** your code ***

    return 0;
}

Example input

5.5
5.6

Example output

Value A: 5.5
Value B: 5.6
5.500000 + 5.600000 = 11.100000.
5.500000 - 5.600000 = -0.100000.
5.500000 * 5.600000 = 30.799999.

Example input

9.13
4.18

Example output

Value A: 9.13
Value B: 4.18
9.130000 + 4.180000 = 13.309999.
9.130000 - 4.180000 = 4.950000.
9.130000 * 4.180000 = 38.163399.
*/

#include <stdio.h>

int main()
{
    float num1, num2;
    
    /* prompt for 2 floating point numbers */
    printf("Enter # 1: ");
    scanf("%f", &num1);
    
    printf("Enter # 2: ");
    scanf("%f", &num2);
    
    /* print results of addition, subtraction and multiplication */
    printf("Value A: %g\n", num1);  /* online search brought up %g for formating float without trailing 0's (to match expected output) */
    printf("Value B: %g\n", num2);  /* online search brought up %g for formating float without trailing 0's (to match expected output) */
    printf("%f + %f = %f\n", num1, num2, num1 + num2);
    printf("%f - %f = %f\n", num1, num2, num1 - num2);
    printf("%f * %f = %f\n", num1, num2, num1 * num2);

    return 0;
}

/* Actual output (copied from Console window)

Enter # 1: 5.5
Enter # 2: 5.6
Value A: 5.5
Value B: 5.6
5.500000 + 5.600000 = 11.100000
5.500000 - 5.600000 = -0.100000
5.500000 * 5.600000 = 30.799999

Enter # 1: 9.13
Enter # 2: 4.18
Value A: 9.13
Value B: 4.18
9.130000 + 4.180000 = 13.309999
9.130000 - 4.180000 = 4.950000
9.130000 * 4.180000 = 38.163399
*/
