/* Lab 3.3.9.2	Type conversions: part 2
Chris Wild

Check the program below. Find all possible compilation errors and logic errors. Fix them. Your version of the program must print the
same result as the expected output. Before you use your compiler, try to find the errors only by manual code analysis. Use the converted
number to check how to round a float number.

#include <stdio.h>

int main(void)
{
	float notExactFive = 5.4;
	float notExactNumber = 6.7;
	int exactFive;
	int roundedNumber;
	if notExactNumber - notExactNumber > 0.5
	{
		roundedNumber = (int)notExactNumber + 1;
	}
	else
	{
		roundedNumber = int notExactNumber;
	}
	exactFive = (int)notExactFive;
	printf("Five is: %f\n", exactFive);
	printf("Rounded to seven: %d\n", roundedNumber);

	return 0;
}

Example output

Five is: 5
Rounded to seven: 7
*/

#include <stdio.h>

int main(void)
{
	float notExactFive = 5.4;
	float notExactNumber = 6.7;
	int exactFive;
	int roundedNumber;

	/* clean up formula for readability and cast second float to int
	   otherwise result will always be 0 */
	if((notExactNumber - (int)notExactNumber) > 0.5)
	{
		roundedNumber = (int)notExactNumber + 1;
	}
	else
	{
		roundedNumber = (int)notExactNumber;	/* put cast to int in brackets */
	}

	exactFive = (int)notExactFive;	/* could remove this line and cast notExactFive directly in print statement */
	printf("Five is: %d\n", exactFive);	/* change %f to %d because exactFive is an int */
	printf("Rounded to seven: %d\n", roundedNumber);

	return 0;
}

/* Actual output (copied from Console window)

Five is: 5
Rounded to seven: 7
*/
