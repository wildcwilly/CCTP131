/* 5.3.8.2 Indexing vs pointers
Chris Wild

Write a program that asks for a number from the user and prints which day of the week that number corresponds to. The days are
indexed from 0 (Sunday) to 6 (Saturday). Store the names of the days in an array and print the name of the day in two ways:
with pointer arithmetic;
with array indexing.
Before the program gets a value from the array, it must first check if the given day is greater than or equal to zero and less than 7. If
not, it should print the message: "Error, no such day." Your version of the program must print the same result as the expected output.

#include <stdio.h>

int main()
{
    *** your code ***
    
    return 0;
}

Example input

0

Example output

Pointer version: Sunday
Array index version: Sunday

Example input

5

Example output

Pointer version: Friday
Array index version: Friday

Example input

12

Example output

Error, no such day.
*/

#include <stdio.h>

int main(void)
{
    int day;
    char *dayOfWeek[] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };

    /* prompt and input number as integer */
    printf("Enter a number for the day of the week 0 (Sunday) to 6 (Saturday): ");
    scanf("%d", &day);
    
    /* validate number */
    if(day >= 0 && day < 7)
    {
        printf("Pointer version: %s\n", *(dayOfWeek + day));
        printf("Array index version: %s\n", dayOfWeek[day]);
    }
    else
    {
        puts("Error, no such day.");
    }
    
    return 0;
}

/* Actual output (copied from console window)

Enter a number for the day of the week 0 (Sunday) to 6 (Saturday): 0
Pointer version: Sunday
Array index version: Sunday

Enter a number for the day of the week 0 (Sunday) to 6 (Saturday): 5
Pointer version: Friday
Array index version: Friday

Enter a number for the day of the week 0 (Sunday) to 6 (Saturday): 7
Error, no such day.
*/