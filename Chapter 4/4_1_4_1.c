/* 4.1.4.1  Switch: part1
Chris Wild

Write a program that asks for the number of a month from the user and prints the name of that month on the screen. When the number
does not correspond to a month (less than 1 or greater than 12), the program prints: "Error: no such month in my calendar." If you can't
remember all the names (and of course to speed up your programming), here is a list:
1 : January
2 : February
3 : March
4 : April
5 : May
6 : June
7 : July
8 : August
9 : September
10 : October
11 : November
12 : December
Your version of the program must print the same result as the expected output.

#include <stdio.h>

int main()
{
    *** your code ***

    return 0;
}

Example input

12

Example output

December

Example input

2

Example output

February

Example input

15

Example output

Error: no such month in my calendar.
*/

#include <stdio.h>

int main(void)  
{
    int month;
    
    /* prompt and input integer number for month (1 to 12) */
    printf("Enter the month (1 - 12): ");
    scanf("%d", &month);
    
    /* choose month based on user input */
    switch(month)
    {
        case(1):
            printf("January\n");
            break;
        case(2):
            printf("February\n");
            break;
        case(3):
            printf("March\n");
            break;
        case(4):
            printf("April\n");
            break;
        case(5):
            printf("May\n");
            break;
        case(6):
            printf("June\n");
            break;
        case(7):
            printf("July\n");
            break;
        case(8):
            printf("August\n");
            break;
        case(9):
            printf("September\n");
            break;
        case(10):
            printf("October\n");
            break;
        case(11):
            printf("November\n");
            break;
        case(12):
            printf("December\n");
            break;
        default:
            printf("Error: no such month in my calendar.\n");
    }

    return 0;
}

/* Actual output (copied from console window)
Enter the month (1 - 12): 1
January

Enter the month (1 - 12): 2
February

Enter the month (1 - 12): 12
December

Enter the month (1 - 12): 0
Error: no such month in my calendar.

Enter the month (1 - 12): 15
Error: no such month in my calendar.
*/