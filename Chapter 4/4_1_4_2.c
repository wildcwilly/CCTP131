/* 4.1.4.2  Switch: part 2
Chris Wild

Write a program that asks for the number of a month from the user and prints the number of days before this month since the start of
the year. When the number does not correspond to a month (less than 1 or greater than 12), the program prints: "Error: no such month
in my calendar." Use only switch for computing the sum of the days (don't use any loops). You don't have to check whether or not the
year is a leap year - assume it is a leap year. If you can't remember all the names and the number of days (and of course to speed up
your programming), here is a list:
1 : January - 31
2 : February - 28 or 29 (during a leap year)
3 : March - 31
4 : April - 30
5 : May - 31
6 : June - 30
7 : July - 31
8 : August - 31
9 : September - 30
10 : October - 31
11 : November - 30
12 : December - 31 - of course you don't need this value in this task
Your version of the program must print the same result as the expected output.

#include <stdio.h>

int main()
{
    *** your code ***


    return 0;
}

Example input

2

Example output

There are 31 days before the given month.

Example input

1

Example output

There are 0 days before the given month.

Example input

4

Example output

There are 91 days before the given month.

Example input

12

Example output

There are 335 days before the given month.
*/

#include <stdio.h>

int main(void)  
{
    int month, days = 0;

    /* prompt and input integer number for month */
    printf("Enter the month (1 - 12): ");
    scanf("%d", &month);

    /* make sure month is in range of 1 - 12 */
    if(month < 1 || month > 12)
    {
        printf("Error: no such month in my calendar.\n");
    }
    else
    {
        /* select the month entered then fall through each case statement to add
           the value of the previous month */
        switch(month)
        {
            case(12):
                days = days + 30;;    /* add November */
            case(11):
                days = days + 31;    /* add October */
            case(10):
                days = days + 30;    /* add September */
            case(9):
                days = days + 31;    /* add August */
            case(8):
                days = days + 31;    /* add July */
            case(7):
                days = days + 30;    /* add June */
            case(6):
                days = days + 31;    /* add May */
            case(5):
                days = days + 30;    /* add April */
            case(4):
                days = days + 31;    /* add March */
            case(3):
                days = days + 29;    /* add February */
            case(2):
                days = days + 31;    /* add January */
            case(1):
                /* there are 0 days before January, just print results */
                printf("There are %d days before the given month.\n", days);
        }
    }
    return 0;
}

/* Actual output (copied from console window)

Enter the month (1 - 12): 1
There are 0 days before the given month.

Enter the month (1 - 12): 2
There are 31 days before the given month.

Enter the month (1 - 12): 4
There are 91 days before the given month.

Enter the month (1 - 12): 12
There are 335 days before the given month.

Enter the month (1 - 12): 0
Error: no such month in my calendar.

Enter the month (1 - 12): 13
Error: no such month in my calendar.
*/