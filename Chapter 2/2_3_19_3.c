/* Module 2.3.19.3 Lab
Chris Wild

Write a small program which prints the differences between all ten digit characters (from '1' to '0') and zero ('0'). Print each one on a
separate line. Your program must print the same result as the expected output.

#include <stdio.h>

int main()
{

	char zero = '0';

	***Your code***

	return 0;
}

Example output
'1' - '0' is: 1
'2' - '0' is: 2
'3' - '0' is: 3
'4' - '0' is: 4
'5' - '0' is: 5
'6' - '0' is: 6
'7' - '0' is: 7
'8' - '0' is: 8
'9' - '0' is: 9
'0' - '0' is: 0
*/

#include <stdio.h>

int main()
{

	char zero = '0';
	char one = '1';
	char two = '2';
	char three = '3';
	char four = '4';
	char five = '5';
	char six = '6';
	char seven = '7';
	char eight = '8';
	char nine = '9';

	printf("'%c' - '%c' is: %d\n", one, zero, one - zero);
	printf("'%c' - '%c' is: %d\n", two, zero, two - zero);
	printf("'%c' - '%c' is: %d\n", three, zero, three - zero);
	printf("'%c' - '%c' is: %d\n", four, zero, four - zero);
	printf("'%c' - '%c' is: %d\n", five, zero, five - zero);
	printf("'%c' - '%c' is: %d\n", six, zero, six - zero);
	printf("'%c' - '%c' is: %d\n", seven, zero, seven - zero);
	printf("'%c' - '%c' is: %d\n", eight, zero, eight - zero);
	printf("'%c' - '%c' is: %d\n", nine, zero, nine - zero);
	printf("'%c' - '%c' is: %d\n", zero, zero, zero - zero);

	return 0;
}

/*
Actual output (copied from Console window)

'1' - '0' is: 1
'2' - '0' is: 2
'3' - '0' is: 3
'4' - '0' is: 4
'5' - '0' is: 5
'6' - '0' is: 6
'7' - '0' is: 7
'8' - '0' is: 8
'9' - '0' is: 9
'0' - '0' is: 0
*/