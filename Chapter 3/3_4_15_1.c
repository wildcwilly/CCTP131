/* Lab 3.4.15.1		Loops: do - while
Chris Wild

Write a program that asks for a number and then prints as many lines as the user inputs. Each line contains as many pairs of characters
("*#") as the number of this line. It should look like the right half of a pyramid. Your version of the program must print the same result
as the expected output. To to this lab, you must use two do-while loops. Two exceptions:
When the user inputs a number less than 1, then the program writes only one line.
When the user inputs a number greater than 20, then the program writes only twenty lines.

#include <stdio.h>

int main()
{
	*** your code ***

	return 0;
}

Example input

3

Example output

*#
*#*#
*#*#*#

Example input

5

Example output

*#
*#*#
*#*#*#
*#*#*#*#
*#*#*#*#*#

Example input

0

Example output

*#
*/

#include <stdio.h>

int main(void)
{
	int num, pairs = 1, counter;

	/* prompt and input integer number */
	printf("Enter a number: ");
	scanf("%d", &num);

	/* start do - while loop for num of rows */
	do
	{
		/* correct out of bounds numbers (1>=x<=20) */
		if(num < 1)
			num = 1;

		if(num > 20)
			num = 20;

		counter = pairs;	/* set the loop counter to the number of pairs of characters */
		/* start do - while loop for character pairs */
		do
		{
			printf("*#");	/* no linefeed until loop finishes */
		}
		while(--counter);	/* decrement counter then assess for 0 (false) */

		printf("\n");	/* end line */
		pairs++;	/* increment # of pairs to print next loop */
	}
	while(--num);	/* decrement counter before assessment */

	return 0;
}

/* Actual output (copied from Console window)

Enter a number: 1
*#

Enter a number: 5
*#
*#*#
*#*#*#
*#*#*#*#
*#*#*#*#*#

Enter a number: -4
*#

Enter a number: 25
*#
*#*#
*#*#*#
*#*#*#*#
*#*#*#*#*#
*#*#*#*#*#*#
*#*#*#*#*#*#*#
*#*#*#*#*#*#*#*#
*#*#*#*#*#*#*#*#*#
*#*#*#*#*#*#*#*#*#*#
*#*#*#*#*#*#*#*#*#*#*#
*#*#*#*#*#*#*#*#*#*#*#*#
*#*#*#*#*#*#*#*#*#*#*#*#*#
*#*#*#*#*#*#*#*#*#*#*#*#*#*#
*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#
*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#
*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#
*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#
*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#
*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#
*/
