/* 6.3.12.1 Functions: part 1 - function call
Chris Wild

Check the code below. Add some code to call the functions defined in the code. Call the functions as many times as necessary and in the
proper order so as to get the expected output. Your version of the program must print the same result as the expected output.

#include <stdio.h>

void hello()
{
    puts("Hello!");
}

void another()
{
    puts("It's me - another function.");
}

int main(void)
{
    *** your code ***

    return 0;
}

Example output

Hello!
Hello!
Hello!
It's me - another function.
Hello!
It's me - another function.
*/

#include <stdio.h>

void hello()
{
    puts("Hello!");
}

void another()
{
    puts("It's me - another function.");
}

int main(void)
{
    hello();
    hello();
    hello();
    another();
    hello();
    another();

    return 0;
}

/* Actual output (copied from console window)

Hello!
Hello!
Hello!
It's me - another function.
Hello!
It's me - another function.
*/