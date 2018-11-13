/* Module 2.3.19.1 Lab
Chris Wild

Check the program below. Find all possible compilation errors and logic errors. Fix them, but you may not change any character values.
Your version of the program must print the same result as the expected output. Before you use your compiler, try to find the errors only
by manual code analysis.

#include <stdio.h>

int main()
{
	printf("Diff beetween '%c' and '%c' is : %d\n", 'c', 'a', 'c', 'a');
	printf("Diff beetween '%c' and '%c' is : %d\n", 'a', 'c', 'a' 'c');

	return 0;
}

Example output

Diff beetween 'c' and 'a' is : 2
Diff beetween 'a' and 'c' is : -2
*/

#include <stdio.h>

int main()
{
	printf("Diff beetween '%c' and '%c' is : %d\n", 'c', 'a', 'c' - 'a');	/* change 'c', 'a' to 'c' - 'a' */
	printf("Diff beetween '%c' and '%c' is : %d\n", 'a', 'c', 'a' - 'c');	/* add - operator to subtract 'c' from 'a' */

	return 0;
}

/*
Actual output (copied from Console window)

Diff beetween 'c' and 'a' is : 2
Diff beetween 'a' and 'c' is : -2
*/