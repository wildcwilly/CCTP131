/* Lab 2.5.22.3
Chris Wild

Write a program that asks the user for a day and month (separate integer values for both). Next, it should print the day number of the
year for the given day and month. Assume that the year is a leap year (February has 29 days). Your program must print the same result
as the expected output. Test it for days of different months (check some of them on paper). Assume that the user input is valid.

#include <stdio.h>

int main()
{

    return 0;
}

Example input

1
1

Example output

The day of the year: 1

Example input
31
1

Example output

The day of the year: 31

Example input

29
2

Example output

The day of the year: 60

Example input

31
12

Example output

The day of the year: 366
*/

#include <stdio.h>

int main(void)
{
    int day, month;
    int dayOfYear = 0;
    
    /* prompt user for day and month inputs */
    printf("Enter the day of the month: ");
    scanf("%d", &day);
    
    printf("Enter the number of the month (1 - 12): ");
    scanf("%d", &month);
    
    if(month > 1)  /* January (add 31) */
    {
        dayOfYear += 31;
    }
    
    if(month > 2)   /* February Leap year (add 29) */
    {
        dayOfYear += 29;
    }
    
    if(month > 3)   /* March (add 31) */
    {
        dayOfYear += 31;
    }

    if(month > 4)   /* April (add 30) */
    {
        dayOfYear += 30;
    }
 
     if(month > 5)   /* May (add 31) */
    {
        dayOfYear += 31;
    }

    if(month > 6)   /* June (add 30) */
    {
        dayOfYear += 30;
    }
 
     if(month > 7)   /* July (add 31) */
    {
        dayOfYear += 31;
    }
 
     if(month > 8)   /* August (add 31) */
    {
        dayOfYear += 31;
    }

    if(month > 9)   /* September (add 30) */
    {
        dayOfYear += 30;
    }
 
     if(month > 10)   /* October (add 31) */
    {
        dayOfYear += 31;
    }

    if(month > 11)   /* November (add 30) */
    {
        dayOfYear += 30;
    }
 
    /* add day to day of year */
    dayOfYear += day;
    
    printf("The day of the year: %d\n", dayOfYear);
    
    return 0;
}

/* Actual output (copied from Console window)

Enter the day of the month: 1
Enter the number of the month (1 - 12): 1
The day of the year: 1

Enter the day of the month: 31
Enter the number of the month (1 - 12): 1
The day of the year: 31

Enter the day of the month: 29
Enter the number of the month (1 - 12): 2
The day of the year: 60

Enter the day of the month: 31
Enter the number of the month (1 - 12): 12
The day of the year: 366
*/
