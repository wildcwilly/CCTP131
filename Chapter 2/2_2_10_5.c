/* Module 2.2.10.5 Lab
Chris Wild

Check the program below. Find all possible compilation errors and logic errors. Fix them, but you may not change any numeric values.
Your version of the program must print the same result as the expected output. Before you use your compiler, try to find the errors only
by manual code analysis.

#include <stdio.h>

int main()
{
	int xValue = 4 * 6 % 5;
	int eightValue = 2 xValue 10 5;
	printf("The value of eight is: %d\n", eightValue);

	return 0;
}

Example output

The value of eight is: 8
*/

#include <stdio.h>

int main(void)
{
	int xValue = 4 * 6 % 5;	/* calculates to 4 */
	int eightValue = 2 + xValue + (10 / 5);	/* add operands to get value */

	printf("The value of eight is: %d\n", eightValue);

	return 0;
}

/*
Actual output (copied from Console window)

The value of eight is: 8
*/