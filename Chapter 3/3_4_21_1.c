/* Lab 3.4.21.1		Loops: for
Chris Wild

Write a program that asks for a number, and then prints twice as many lines as the user inputs. The first half of every other line contains
one "*" character at the start, as many spaces as the number of this line (line numbers count from 0 in this task) and one "*" character at
the end of the line. The second half is a mirror reflection of the first. It should look like an arrowhead. Your version of the program must
print the same result as the expected output. To do this task, you should use two outer for loops and two inner for loops. You shouldn't
use any special formatting in printf to print the spaces - just use the for loop. Two exceptions:
When the user inputs a number less than 1, then the program doesn't write any line.
When the user inputs a number greater than 20, then the program writes only forty lines.

#include <stdio.h>

int main()
{
*** your code ***

	return 0;
}


Example input

3

Example output

**
* *
*  *
*  *
* *
**

Example input

9

Example output

**
* *
*  *
*   *
*    *
*     *
*      *
*       *
*        *
*        *
*       *
*      *
*     *
*    *
*   *
*  *
* *
**
*/

#include <stdio.h>

int main(void)
{
	int num, rows, spaces;

	/* prompt and input integer digit */
	printf("Enter a number: ");
	scanf("%d", &num);

	/* if num < 1 do not print anything */
	if(num > 0)
	{
		/* limit rows if num > 20 to 40 */
		if(num > 20)
			num = 20;

		/* print growing rows up to num rows */
		for(rows = 0; rows < num; rows++)
		{
			printf("*");	/* print start character */

			/* loop through spaces */
			for(spaces = 0; spaces < rows; spaces++)
			{
				printf(" ");
			}

			printf("*\n");	/* print end character with newline */
		}

		/* print shrinking rows up to num rows */
		for(rows = num - 1; rows >= 0; rows--)
		{
			printf("*");	/* print start character */

			/* loop through spaces */
			for(spaces = 0; spaces < rows; spaces++)
			{
				printf(" ");
			}

			printf("*\n"); /* print end character with newline */
		}
	}

	return 0;
}

/* Actual output (copied from Console window)

Enter a number: 1
**
**

Enter a number: 5
**
* *
*  *
*   *
*    *
*    *
*   *
*  *
* *
**

Enter a number: 25
**
* *
*  *
*   *
*    *
*     *
*      *
*       *
*        *
*         *
*          *
*           *
*            *
*             *
*              *
*               *
*                *
*                 *
*                  *
*                   *
*                   *
*                  *
*                 *
*                *
*               *
*              *
*             *
*            *
*           *
*          *
*         *
*        *
*       *
*      *
*     *
*    *
*   *
*  *
* *
**

Enter a number: 0 

Enter a number: -5
*/
