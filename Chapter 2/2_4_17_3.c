/* 2.4.17.3 Lab
Chris Wild

Write a program that prints the name of a given day of the week. Your program must print the same result as the expected output. Test
it for all days of the week (for now, test it only for valid values).

#include <stdio.h>

int main(void)
{
    int dayOfWeek = 1;
    *** your code ***

    return 0;
}

Example output

The day of the week is: Monday
*/

#include <stdio.h>

int main(void)
{
    int dayOfWeek = 1;
    
    /* Day of week is Monday (1) to Sunday (7) */
    if(dayOfWeek == 1)
    {
        printf("The day of the week is: Monday");
    }
    if(dayOfWeek == 2)
    {
        printf("The day of the week is: Tuesday");
    }
    if(dayOfWeek == 3)
    {
        printf("The day of the week is: Wednesday");
    }
    if(dayOfWeek == 4)
    {
        printf("The day of the week is: Thursday");
    }
    if(dayOfWeek == 5)
    {
        printf("The day of the week is: Friday");
    }
    if(dayOfWeek == 6)
    {
        printf("The day of the week is: Saturday");
    }
    if(dayOfWeek == 7)
    {
        printf("The day of the week is: Sunday");
    }

    return 0;
}

/* Actual output (Copied from console window)

The day of the week is: Monday

Tested with all values plus 2 out of range values.
*/