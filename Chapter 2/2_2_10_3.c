/* Module 2.2.10.3 Lab
Chris Wild

Check the program below. Find all possible compilation errors and logic errors. Fix them, but you may not change any numeric values.
Your version of the program must print the same result as the expected output. Before you use your compiler, try to find the errors only
by manual code analysis.

#include <stdio.h>

int main()
{
	float tenValue = 2 3 4;
	float twelveValue = 2 2.5 2 3.5 ;
	printf("The value of ten is: %f\n", tenValue);
	printf("The value of twelve is: %f\n", twelveValue);

	return 0;
}

Example output

The value of seven is: 7.000000
The value of eight and a half is: 8.500000
*/

#include <stdio.h>

int main(void)	/* add void */
{
	float sevenValue = 3 * 4 / 2;	/* change tenValue to sevenValue for clarity. Rearrange numbers to get math to work (multiply 3 x 4 then divide by 2 to get 6 */
	float eightValue = -2 + 2.5 + (2 * 3.5);	/* change twelveValue to eightValue for clarity. Rearrange numbers and add opperands to get appropriate value */

	printf("The value of seven is: %f\n", ++sevenValue); /* change ten to seven. change tenValue to sevenValue for clarity. ++sevenValue to increase 6 to 7 before printing */
	printf("The value of eight and a half is: %f\n", ++eightValue);	/* change twelveValue to eightValue for clarity. change twelve to eight. ++eightValue to increase 7.5 to 8.5 before printing */

	return 0;
}

/*
Actual output (copied from Console window)

The value of seven is: 7.000000
The value of eight and a half is: 8.500000
*/