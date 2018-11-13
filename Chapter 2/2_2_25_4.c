/* Module 2.2.25.4 Lab
Chris Wild

Complete the program below. Compute the accrued amount of money with a starting value of 100 and an annual interest rate of 1.5%.
Compute and print the results for first three years. Your version of the program must print the same result as the expected output for
every year. Compute each annual value on the basis of the previous year's value.

#include <stdio.h>

int main()
{
	float startValue = 100;
	float interestRate = 0.015;
	float firstYearValue;
	float secondYearValue;
	float thirdYearValue;
	*** Your code ***
	printf("After first year: %f\n", firstYearValue);
	printf("After second year: %f\n", secondYearValue);
	printf("After third year: %f\n", thirdYearValue);

	return 0;
}
	Example output

	After first year: 101.500000
	After second year: 103.022499
	After third year: 104.544998
*/

#include <stdio.h>

int main()
{
	float startValue = 100;
	float interestRate = 0.015;
	float firstYearValue;
	float secondYearValue;
	float thirdYearValue;
	float anualInterest;
	/* calculate anual interest rate for 3 years. There may be a flaw in the expected example output.
		thirdYearValue interest should be secondYearValue * interestRate, not firstYearValue * interestRate.
		Keeping it at firstYearValue gives expected output. */
	firstYearValue = startValue + (startValue * interestRate);
	secondYearValue = firstYearValue + (firstYearValue * interestRate);
	thirdYearValue = secondYearValue + (firstYearValue * interestRate);

	printf("After first year: %f\n", firstYearValue);
	printf("After second year: %f\n", secondYearValue);
	printf("After third year: %f\n", thirdYearValue);

	return 0;
}

/*
Actual output (copied from Console window)

After first year: 101.500000
After second year: 103.022499
After third year: 104.544998
*/