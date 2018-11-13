/* Lab 3.5.23.1	single bits
Chris Wild

A nibble is just a four-bit aggregation - we can also call it a half-byte. Sometimes we use the terms "low nibble" and "high nibble" to
denote nibbles containing less significant bits (low nibble - L) and more significant bits (high nibble - H) within a byte. Write a program
that asks for one integer number smaller than 256 from the user and prints both nibbles of the number. You don't have to verify the
input. Your version of the program must print the same result as the expected output.

#include <stdio.h>

int main()
{
	*** your code ***

	return 0;
}

Example input

255

Example output

H nibble: 15
L nibble: 15

Example input

63

Example output

H nibble: 3
L nibble: 15

Example input

11

Example output

H nibble: 0
L nibble: 11
*/

#include <stdio.h>

int main(void)
{
	int num, high, low;

	/* prompt and input integer number from 0 to 255 */
	printf("Enter a number between 0 and 255: ");
	scanf("%d", &num);

	/* get the high and low nibbles from the number by 'and'ing with
	   an appropriate mask */
	high = num & 0x00F0;	/* 0x00F0 = 11110000 */
	low = num & 0x000F;		/* 0x000F = 00001111 */

	/* shift high nibble to right (by 1 nibble 4 bits) to remove trailing binary 0's */
	high = high >> 4;

	printf("H nibble: %d\n", high);
	printf("L nibble: %d\n", low);

	return 0;
}

/* Actual output (copied from Console window)

Enter a number between 0 and 255: 255
H nibble: 15
L nibble: 15

Enter a number between 0 and 255: 63
H nibble: 3
L nibble: 15

Enter a number between 0 and 255: 11
H nibble: 0
L nibble: 11
*/
