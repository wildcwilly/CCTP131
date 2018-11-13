/* Module 2.2.25.2 Lab
Chris Wild

Check the program below. Find all possible compilation errors and logic errors. Fix them, but you may not change any numeric values.
However, you may use parentheses (you can add or remove them). Your version of the program must print the same result as the
expected output. Before you use your compiler, try to find the errors only by manual code analysis.

#include <stdio.h>

int main()
{
	int xValue = 3;
	int yValue = 2;
	int result = (xValue + yValue * 2 + yValue);
	int smallResult = xValue + yValue * 4 - xValue);
	printf("the result is: %d\n", result);
	printf("the small result is: %d\n", smallResult);

	return 0;
}

Example output

the result is: 20
the small result is: 5
*/

#include <stdio.h>

int main()
{
	int xValue = 3;
	int yValue = 2;
	int result = (xValue + yValue) * (2 + yValue);	/* add first ) and second ( */
	int smallResult = (xValue + yValue) * (4 - xValue);	/* add all but last () */
	printf("the result is: %d\n", result);
	printf("the small result is: %d\n", smallResult);

	return 0;
}

/*
Actual output (copied from Console window)

the result is: 20
the small result is: 5
*/