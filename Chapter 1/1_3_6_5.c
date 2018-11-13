/* Module 1.3.6.5-A
Chris Wild

Write a program which computes and prints the sum of the days in all four quarters of the current year. Use variables to store these four
values.
If you want, you can use code from a previous task, but you will learn more if you write the code from the beginning.

Example output
Days in Q1 of the current year: 91
Days in Q2 of the current year: 91
Days in Q3 of the current year: 92
Days in Q4 of the current year: 92

Example output
Days in Q1 of the current year: 90
Days in Q2 of the current year: 91
Days in Q3 of the current year: 92
Days in Q4 of the current year: 92
*/

#include <stdio.h>

int main(void)
{
    /* declare variables for months with # of days in month as values */
    int January = 31;
    int February = 29;  /* change from 28 to 29 for leap year */
    int March = 31;
    int April = 30;
    int May = 31;
    int June = 30;
    int July = 31;
    int August = 31;
    int September = 30;
    int October = 31;
    int November = 30;
    int December = 31;
    
    /* create variable for the quarters of the year and add appropriate months for values */
    int Q1 = January + February + March;
    int Q2 = April + May + June;
    int Q3 = July + August + September;
    int Q4 = October + November + December;
    
    /* print results of calculations */
    printf("Days in Q1 of the current year: %d\n", Q1);
    printf("Days in Q2 of the current year: %d\n", Q2);
    printf("Days in Q3 of the current year: %d\n", Q3);
    printf("Days in Q4 of the current year: %d\n", Q4);
    
    return 0;
}