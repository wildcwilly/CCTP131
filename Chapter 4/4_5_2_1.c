/* 4.6.23.1		Pointers and sizeof
Chris Wild

Write a simple program that prints the size of types in your architecture. Check this for all basic types, the variables of some types and
some pointers - like the output list below. Your version of the program must print the same result as the expected output, unless you are
working in a different architecture.
#include <stdio.h>
int main()
{
	*** your code ***

	return 0;
}

Example output

1 byte for chars
1 byte for char variables
2 bytes for shorts
2 bytes for short variables
4 bytes for ints
4 bytes for int variables
4 bytes for longs
4 bytes for long variables
8 bytes for long longs
8 bytes for long long variables
4 bytes for floats
4 bytes for float variables
8 bytes for doubles
8 bytes for double variables
4 bytes for pointers
4 bytes for pointer variables
4 bytes for address of char variable
4 bytes for pointer to char variable
1 byte for value stored by pointer to char variable
*/

#include <stdio.h>

int main(void)  
{
	char character = 'H';
	char *ptr = &character;

	printf("%lu byte for chars\n", sizeof(char));
	printf("%lu byte for char variables\n", sizeof('c'));
	printf("%lu bytes for shorts\n", sizeof(short));
	printf("%lu bytes for short variables\n", sizeof((short)3));
	printf("%lu bytes for ints\n", sizeof(int));
	printf("%lu bytes for int variables\n", sizeof(5));
	printf("%lu bytes for longs\n", sizeof(long));
	printf("%lu bytes for long variables\n", sizeof((long)10035));
	printf("%lu bytes for long longs\n", sizeof(long long));
	printf("%lu bytes for long long variables\n", sizeof((long long)234234));
	printf("%lu bytes for floats\n", sizeof(float));
	printf("%lu bytes for float variables\n", sizeof((float)3.14));
	printf("%lu bytes for doubles\n", sizeof(double));
	printf("%lu bytes for double variables\n", sizeof((double)3.1415));
	printf("%lu bytes for pointers\n", sizeof(int*));
	printf("%lu bytes for pointer variables\n", sizeof(ptr));
	printf("%lu bytes for address of char variable\n", sizeof(&character));
	printf("%lu bytes for pointer to char variable\n", sizeof(ptr));
	printf("%lu byte for value stored by pointer to char variable\n", sizeof(*ptr));

    return 0;
}

/* Actual output (copied from console window)

From Linux Mint 19 machine:
1 byte for chars
1 byte for char variables
2 bytes for shorts
2 bytes for short variables
4 bytes for ints
4 bytes for int variables
8 bytes for longs
8 bytes for long variables
8 bytes for long longs
8 bytes for long long variables
4 bytes for floats
4 bytes for float variables
8 bytes for doubles
8 bytes for double variables
8 bytes for pointers
8 bytes for pointer variables
8 bytes for address of char variable
8 bytes for pointer to char variable
1 byte for value stored by pointer to char variable

From sandbox machine:
1 byte for chars
1 byte for char variables
2 bytes for shorts
2 bytes for short variables
4 bytes for ints
4 bytes for int variables
8 bytes for longs
8 bytes for long variables
8 bytes for long longs
8 bytes for long long variables
4 bytes for floats
4 bytes for float variables
8 bytes for doubles
8 bytes for double variables
8 bytes for pointers
8 bytes for pointer variables
8 bytes for address of char variable
8 bytes for pointer to char variable
1 byte for value stored by pointer to char variable
*/