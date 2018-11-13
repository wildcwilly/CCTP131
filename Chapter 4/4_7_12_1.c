/* 4.7.12.1		Pointers: advanced
Chris Wild

Check the program below. It copies values from one array to another, adding 1.0. Then it's supposed to print the numbers from the
middle point of the new array to both ends, alternately. Warning: the midpoint is betwen two cells - one before and one after - start with
them. We'll use pointers to make a copy, in order to show you this kind of operation (but in this case, you can use array indexing). Find
all possible compilation errors and logic errors. Fix them. Your version of the program must print the same result as the expected output.
Before you use your compiler, try to find the errors only by manual code analysis.

#include <stdio.h>

int main()
{
	int i;
	float numbers[10] = {3.3, 4.4, 5.2, 2.3, 4.5, 6.8, 9.8, 8.2, 7.5, 9.2};
	float biggerNumbers[10];
	float *source = numbers;
	float *copy = biggerNumbers;
	for (i = 0; i < 10; i++)
	{
		*copy = *source;
		copy--;
		source++;
	}
	float *biggerEnd = copy;
	float *bigger Start = bigger Numbers;
	float *middle1 = biggerNumbers+5;
	float *middle2 = middle1+5;
	for ( ; middle1>=biggerStart ; middle1++, middle2++)
	{
		printf("%.1f\n", *middle1);
		printf("%.1f\n", *middle2);
	}

	return 0;
}

Example output

4.5
6.8
2.3
9.8
5.2
8.2
4.4
7.5
3.3
9.2
*/

#include <stdio.h>

int main(void)  
{
	int i;
	float numbers[10] = {3.3, 4.4, 5.2, 2.3, 4.5, 6.8, 9.8, 8.2, 7.5, 9.2};
	float biggerNumbers[10];
	float *source = numbers;
	float *copy = biggerNumbers;

	for (i = 0; i < 10; i++)
	{
		*copy = *source + 1.0;	/* defreference pointer and copy cells 1 at a time and add 1.0 */
		copy++;	/* change -- to ++ otherwise copy is moving out of bounds, advance to next cell */
		source++;	/* advance to next cell */
	}

	float *biggerStart = copy - 10;	/* change biggerEnd to biggerStart and point to copy (-10 to return copy to start) pointing to biggerNumbers */
	/*float *biggerStart = bigger Numbers; <<-- this line is not required. Use either copy pointer or biggerNumbers array, I chose copy pointer */
	float *middle1 = biggerStart + 4;	/* change biggerNumbers to biggerStart, assign left of middle element to middle1 (biggerStart + 4) */
	float *middle2 = middle1 + 1;	/* change 5 to 1 (middle1 at element 5, middle2 at element 6) */

	for ( ; middle1>=biggerStart ; middle1--, middle2++)	/* change middle1++ to middle1-- to decrement down to biggerStart */
	{
		printf("%.1f\n", *middle1);
		printf("%.1f\n", *middle2);
	}

    return 0;
}

/* Actual output (copied from console window)

Output without + 1.0:

4.5
6.8
2.3
9.8
5.2
8.2
4.4
7.5
3.3
9.2

Output with + 1.0:

5.5
7.8
3.3
10.8
6.2
9.2
5.4
8.5
4.3
10.2
*/