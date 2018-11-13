/* Lab 2.5.22.4
Chris Wild

Write a program that prints the name of a given day of the week. Your program must print the same result as the expected output. This
task is similar to one of the previous labs, but this time you have to get the day of the week from the user and validate the input. Test it
for all the days of the week (add code to print a message to the user when he/she enters an invalid day of the week).

#include <stdio.h>

int main()
{
    *** your code ***

    return 0;
}

Example input

1

Example output

The day of week is: Monday

Example input

0

Example output

The day of week is: Sunday

Example input

9

Example output

There is no such day: 9. Input value must be from 0 to 6.
*/

#include <stdio.h>

int main()
{
    int dayOfWeek;
    
    /* prompt for and input day of week as integer */
    printf("Enter the number of the day of the week (0 Sunday - 6 Saturday): ");
    scanf("%d", &dayOfWeek);
    
    if(dayOfWeek == 0) /* Sunday */
    {
        printf("The day of week is: Sunday\n");
    }
    
    if(dayOfWeek == 1) /* Monday */
    {
        printf("The day of week is: Monday\n");
    }
    
    if(dayOfWeek == 2) /* Tuesday */
    {
        printf("The day of week is: Tuesday\n");
    }
    
    if(dayOfWeek == 3) /* Wednesday */
    {
        printf("The day of week is: Wednesday\n");
    }
    
    if(dayOfWeek == 4) /* Thursday */
    {
        printf("The day of week is: Thursday\n");
    }
    
    if(dayOfWeek == 5) /* Friday */
    {
        printf("The day of week is: Friday\n");
    }
    
    if(dayOfWeek == 6) /* Saturday */
    {
        printf("The day of week is: Saturday\n");
    }

    if(dayOfWeek > 6 || dayOfWeek < 0) /* invalid number entered */
    {
        printf("There is no such day: %d. Input value must be from 0 to 6.\n", dayOfWeek);
    }
    
    return 0;
}

/* Actual output (copied from Console window)

Enter the number of the day of the week (0 Sunday - 6 Saturday): 0
The day of week is: Sunday

Enter the number of the day of the week (0 Sunday - 6 Saturday): 4
The day of week is: Thursday

Enter the number of the day of the week (0 Sunday - 6 Saturday): 9
There is no such day: 9. Input value must be from 0 to 6.
*/
