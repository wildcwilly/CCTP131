/* Lab 2.5.22.1
Chris Wild

Write a program which takes two values: a count of the days in one week and the value of Pi. Next, print these two values. Don't forget
about data types. Your version of the program must print the same result as the expected output.

#include <stdio.h>

int main()
{
    *** your code ***

    return 0;
}

Example input

7
3.14

Example output

How many days in the week: 7
The value of Pi to two points: 3.14
There are 7 in a week.
Pi value is 3.140000.
*/

#include <stdio.h>

int main(void)
{
    int daysInWeek;
    float Pi;
    
    /* prompt and enter # of days in week */
    printf("How many days in the week: ");
    scanf("%d", &daysInWeek);
    
    /* prompt and enter value of Pi */
    printf("The value of Pi to two points: ");
    scanf("%f", &Pi);
    
    /* print output */
    printf("There are %d days in a week.\n", daysInWeek);
    printf("Pi value is %f\n", Pi);

    return 0;
}

/* Actual output (copied from Console window)

How many days in the week: 7
The value of Pi to two points: 3.14
There are 7 days in a week.
Pi value is 3.140000
*/
