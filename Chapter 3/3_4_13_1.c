/* Lab 3.4.13.1		Loops: while
Chris Wild

Write a program that takes two integer numbers and prints their sum. Do this until the user enters 0 (but print the last sum). Additionally,
if the user inputs 99 as the first number and 0 as the second number, just print "Finish." and, of course, end the program. Of course use
the while loop. Your version of the program must print the same result as the expected output.

#include <stdio.h>

int main()
{
	*** your code ***

	return 0;
}

Example input

1
1
2
0

Example output

Sum: 2
Sum: 2

Example input

1
5
99
0

Example output

Sum: 6
Sum: 99
Finish.
*/

#include <stdio.h>

int main(void)
{
	int num1, num2, notDone = 1, sum;

	/* Start while loop until user enters 0 */
	while(notDone)
	{
		/* prompt for and input 2 ingeger values */
		printf("Add 2 numbers - Enter the first number: ");
		scanf("%d", &num1);

		printf("Enter the second number: ");
		scanf("%d", &num2);

		/* check to see if 0 was entered to end loop */
		if(num1 == 0 || num2 == 0)
		{
			notDone = 0;
		}

		/* if user entered 99 then 0, just print "Finished" and exit
		   otherwise print the sum. Example output shows printing sum of 
		   99 + 0 before printing finished but that's not what the reqirements
		   say to do */
		if(num1 == 99 && num2 == 0)
		{
			printf("Finished.\n");
		}
		else
		{
			printf("Sum: %d\n", num1 + num2);
		}
	}

	return 0;
}

/* Actual output (copied from Console window)

Add 2 numbers - Enter the first number: 1
Enter the second number: 1
Sum: 2
Add 2 numbers - Enter the first number: 2
Enter the second number: 0
Sum: 2

Add 2 numbers - Enter the first number: 1
Enter the second number: 5
Sum: 6
Add 2 numbers - Enter the first number: 99
Enter the second number: 0
Finished.

Add 2 numbers - Enter the first number: 0
Enter the second number: 3
Sum: 3

Add 2 numbers - Enter the first number: -3
Enter the second number: 6
Sum: 3
Add 2 numbers - Enter the first number: 100
Enter the second number: 100
Sum: 200
Add 2 numbers - Enter the first number: -8
Enter the second number: -8
Sum: -16
Add 2 numbers - Enter the first number: 0
Enter the second number: -14
Sum: -14
*/
