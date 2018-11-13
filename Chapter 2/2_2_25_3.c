/* Module 2.2.25.3 Lab
Chris Wild

Check the program below. Find all possible compilation errors and logic errors. Fix them, but you may not change any numeric values.
However, you may use parentheses (you can add or remove them). Your version of the program must print the same result as the
expected output. Before you use your compiler, try to find the errors only by manual code analysis.

#include <stdio.h>

int main()
{
	int xValue = 5;
	int yValue = 3;
	int result = (xValue % yValue * 14 % yValue;
	int smallResult = xValue + 10 % 4 % xValue;
	printf("the result is: %d\n", result);
	printf("the small result is: %d\n", small Result);

	return 0;
}

Example output

the result is: 4
the small result is: 7
*/

#include <stdio.h>

int main()
{
	int xValue = 5;
	int yValue = 3;
	int result = (xValue % yValue) * (14 % yValue);	/* add missing () */
	int smallResult = xValue + 10 % 4 % xValue;	/* brackets aren't necessary for functionality, only readability */

	printf("the result is: %d\n", result);
	printf("the small result is: %d\n", smallResult); /* fix smallResult spelling */

	return 0;
}

/*
Actual output (copied from Console window)

the result is: 4
the small result is: 7
*/