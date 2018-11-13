/* Lab 3.5.7.1	Logical expressions
Chris Wild

Write a program that computes and prints whether or not a given year is a leap year. A leap year is a year that is exactly (without a
remainder) divisible by four, except for years that are exactly divisible by 100, but these years are leap years if they are exactly divisible
by 400. Use the modulo operator and some logic operators in your program and try to write only one condition (of course you can now
use the else keyword). Your version of the program must print the same result as the expected output.

#include <stdio.h>

int main()
{
	*** your code ***

	return 0;
}

Example input

2010

Example output

2010 is not a leap year.

Example input

2015

Example output

2015 is not a leap year.

Example input

2000

Example output

2000 is a leap year.

Example input

1900

Example output

1900 is not a leap year.
*/

#include <stdio.h>

int main(void)
{
	int year;

	/* prompt and input an integer number for year */
	printf("Enter a year: ");
	scanf("%d", &year);

	/* figure out if year is a leap year. Invert solution of % so 0 is true */
	if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
	{
		printf("%d is a leap year.\n", year);
	}
	else
	{
		printf("%d is not a leap year.\n", year);
	}

	return 0;
}

/* Actual output (copied from Console window)

Enter a year: 2010
2010 is not a leap year.

Enter a year: 2015
2015 is not a leap year.

Enter a year: 2016
2016 is a leap year.

Enter a year: 2000
2000 is a leap year.

Enter a year: 1900
1900 is not a leap year.

Enter a year: 2100
2100 is not a leap year.

Enter a year: 2012
2012 is a leap year.
*/
