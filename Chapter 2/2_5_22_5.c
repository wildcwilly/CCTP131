/* Lab 2.5.22.5
Chris Wild

Write a program that asks the user for a day, month and year (as separate integer values). Next, it should print the day number of the
year for the given day, month and year. This task is similar to one of the previous labs, but this time you have to get the year from the
user and check if that year is a leap year. You must use this information (whether this is a leap year or not) for computation. Your
program must print the same result as the expected output. Test it for several days of different years (check some of them on paper).
Assume that the user input is valid.

#include <stdio.h>

int main()
{
    *** your code ***
    *** because you may not know the else instruction yet,
    this simple formula will help you to check if a year is a leap year ***
    if (year % 400 == 0)
        puts("Leap");
    else if (year % 100 == 0)
        puts("Not leap");
    else if (year % 4 == 0)
        puts("Leap");
    *** your code ***

    return 0;
}

Example input

1
1
2016

Example output

The day of the year: 1

Example input
31
1
2015

Example output

The day of the year: 31

Example input

1
3
2016

Example output

The day of the year: 60

Example input

31
12
2015

Example output
The day of the year: 365
*/

#include <stdio.h>

int main()
{
    int day, month, year;
    int dayOfYear = 0;
    
    /* prompt for and input day of month */
    printf("Enter the day of the month: ");
    scanf("%d", &day);
    
    /* prompt for and input month as integer */
    printf("Enter the month (1 to 12): ");
    scanf("%d", &month);
    
    /* prompt for and input year as integer */
    printf("Enter the year: ");
    scanf("%d", &year);
    
    if(month > 1)   /* January (add 31) */
    {
        dayOfYear += 31;
    }
    
    if(month > 2)   /* February - calculate if leap year (29 days) or not (28 days) */
    {
        /* because you may not know the else instruction yet,
        this simple formula will help you to check if a year is a leap year */
        if (year % 400 == 0)
            dayOfYear += 29;
        else if (year % 100 == 0)
            dayOfYear += 28;
        else if (year % 4 == 0)
            dayOfYear += 29;
        else                    /* add default value of 28 days */
            dayOfYear += 28;
    }
    
    if(month > 3) /* March (add 31) */
    {
        dayOfYear += 31;
    }
    
    if(month > 4) /* April (add 30) */
    {
        dayOfYear += 30;
    }
    
    if(month > 5) /* May (add 31) */
    {
        dayOfYear += 31;
    }

    if(month > 6) /* June (add 30) */
    {
        dayOfYear += 30;
    }
    
    if(month > 7) /* July (add 31) */
    {
        dayOfYear += 31;
    }

    if(month > 8) /* August (add 31) */
    {
        dayOfYear += 31;
    }

    if(month > 9) /* September (add 30) */
    {
        dayOfYear += 30;
    }
    
    if(month > 10) /* October (add 31) */
    {
        dayOfYear += 31;
    }

    if(month > 11) /* November (add 30) */
    {
        dayOfYear += 30;
    }
    
    /* add day of month to dayOfYear */
    dayOfYear += day;
    
    printf("The day of the year: %d\n", dayOfYear);
    
    return 0;
}

/* Actual output (copied from Console window)

Enter the day of the month: 1
Enter the month (1 to 12): 1
Enter the year: 2016
The day of the year: 1

Enter the day of the month: 31 
Enter the month (1 to 12): 1
Enter the year: 2015
The day of the year: 31

Enter the day of the month: 1
Enter the month (1 to 12): 3
Enter the year: 2016
The day of the year: 61

Enter the day of the month: 1
Enter the month (1 to 12): 3
Enter the year: 2015
The day of the year: 60

Enter the day of the month: 31
Enter the month (1 to 12): 12
Enter the year: 2015
The day of the year: 365

Enter the day of the month: 31
Enter the month (1 to 12): 12
Enter the year: 2016
The day of the year: 366
*/
