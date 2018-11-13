/* 2.4.17.1 Lab
Chris Wild

Check the program below. Find all possible compilation errors and logic errors. Fix them and try to find proper conditions for all three
statements. Your version of the program must print the same result as the expected output. Before you use your compiler, try to find the
errors only by manual code analysis.

#include <stdio.h>

int main()
{
    int a = 10;
    if (a 9)
    puts("First condition is true");
    if (a 9)
    puts("Second condition is true");
    if (a, 9 + 1)
    puts("Third condition is true");

    return 0;
}

Example output

First condition is true
Third condition is true
*/

#include <stdio.h>

int main(void)
{
    int a = 10;
    
    if (a > 9)  /* add > comparison to make condition true */
    {
        puts("First condition is true");
    }
    if (a == 9)  /* add == comparison (could also be < or <=) to make condition false (to match expected output) */
    {
        puts("Second condition is true");
    }
    if (a == 9 + 1) /* add == comparison to make condition true */
    {
        puts("Third condition is true");
    }
    
    return 0;
}

/* Actual output (Copied from console window)

First condition is true
Third condition is true
*/