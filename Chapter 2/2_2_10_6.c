/* Module 2.2.10.6 Lab
Chris Wild

Take a look at the code below: it assigns two integer values, manipulates them and finally outputs the result and bigresult variables. The
problem is that the manipulations have been described using natural language, so the code is completely useless now.
We want you to act as an intelligent (naturally!) compiler and to translate the formula into a real "C" code notation.
Test your code using the data we have provided.

#include <stdio.h>

int main(void)
{
	int xValue=5;
	int yValue=9;
	int result;
	int bigResult;

	*****
	increment xValue by 3
	decrement yValue by xValue
	multiply xValue times yValue giving result
	increment result by result
	decrement result by 1
	assign result modulo result to yValue
	increment result by result added to xValue
	assign result times result times result to bigResult
	increment result by xValue times yValue
	*****

	printf("result: %d\n", result);
	printf("big result: %d\n", bigResult);

	return 0;
}

Example output

result: 38
big result: 54872
*/

#include <stdio.h>

int main(void)
{
	int xValue=5;
	int yValue=9;
	int result;
	int bigResult;

	/* increment xValue by 3 */
	xValue = xValue + 3;

	/*decrement yValue by xValue*/
	yValue = yValue - xValue;

	/*multiply xValue times yValue giving result*/
	result = xValue * yValue;

	/*increment result by result*/
	result = result + result;

	/*decrement result by 1*/
	result = result - 1;

	/*assign result modulo result to yValue*/
	yValue = result % result;

	/*increment result by result added to xValue*/
	result = result + (result + xValue);

	/*assign result times result times result to bigResult*/
	bigResult = result * result * result;

	/*increment result by xValue times yValue*/
	result = result + (xValue * yValue);

	printf("result: %d\n", result);
	printf("big result: %d\n", bigResult);

	return 0;
}

/*
Actual output (copied from Console window)

result: 38
big result: 54872
*/