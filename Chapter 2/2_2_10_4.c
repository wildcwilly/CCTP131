/* Module 2.2.10.4 Lab
Chris Wild

Check the program below. Find all possible compilation errors and logic errors. Fix them, but you may not change any numeric values.
Your version of the program must print the same result as the expected output. Before you use your compiler, try to find the errors only
by manual code analysis.

#include <stdio.h>

int main()
{
	int tenValue = 3 8 % 14;
	int twentyValue = 2 tenValue 10 5;
	printf("The value of ten is: %d\n", tenValue);
	printf("The value of twenty is: %d\n", twentyValue);

	return 0;
}

Example output

The value of ten is: 10
The value of twenty is: 20
*/

#include <stdio.h>

int main(void)
{
	int tenValue = 3 + -8 + 14; /* change % to +, add operands to equal 9 */
	int twentyValue  = 2 + (tenValue  * 10 / 5);	/* add operands for math (tenValue = 9) */

	printf("The value of ten is: %d\n", ++tenValue);	/* add ++ to tenValue to increase by 1 before printing */
	printf("The value of twenty is: %d\n", twentyValue);

	return 0;
}

/*
Actual output (copied from Console window)

The value of ten is: 10
The value of twenty is: 20
*/