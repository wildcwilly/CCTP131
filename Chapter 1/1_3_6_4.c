/* Module 1.3.6.4-A
Chris Wild

Check the program below. Find all possible compilation errors and logic errors. Fix them. Your version of the program must print the
same result as the expected output. Before you use your compiler, try to find the errors only by manual code analysis. Remember to find
the logic errors (check the order of the months).
If you want to improve the variable names, then do so, but remember that variable names have to be as descriptive as possible, and also
as short as possible.

#include <stdio.h>

int main()
{
    int daysIn CurrentFebruary = 29;
    int daysIn January = 31;
    int daysIn February = daysInCurrentFebruary;
    int daysIn March = 31;
    int daysIn April = 30;
    int daysIn May = 31;
    int daysIn June = 30;
    int daysIn July = 31;
    int daysIn August = 31;
    int daysIn September = 3*;
    int daysIn October = 3+;
    int daysIn November = 3*;
    int daysIn December = 3+;
    int daysInFirstHalf = daysIn January + daysIn December + daysIn March
     + daysIn April + daysIn May + daysIn July;
    int daysInSecondHalf = daysIn June + daysIn August + daysIn September
     + daysIn October + daysIn November + daysIn February;
    printf("Days in the first half of the current year: %d\n", daysInFirstHalf);
    printf("Days in the second half of the current year: %d\n", daysInSecondHalf);
    printf("Days in the current year: %d\n", daysInFirstHalf + daysInSecondHalf);

    return 0;
}

Example output
Days in the first half of the current year: 182
Days in the second half of the current year: 184
Days in the current year: 366

Example output
Days in the first half of the current year: 181
Days in the second half of the current year: 184
Days in the current year: 365
*/

#include <stdio.h>

int main()
{
    /* remove daysIn from all declared variable names */
    /* remove currentFebruary for readability (redundant)*/
    int January = 31;
    int February = 28;  /* change value of February from 28 to 29 if Leap Year */
    int March = 31;
    int April = 30;
    int May = 31;
    int June = 30;
    int July = 31;
    int August = 31;
    int September = 30; /* change 3* to 30 */
    int October = 31;   /* change 3+ to 31 */
    int November = 30;  /* change 3* to 30 */
    int December = 31;  /* change 3+ to 31 */
    
    /* clean up variable names to match declared names, remove December and July, add February and June */
    int daysInFirstHalf = January + February + March + April + May + June;
    
    /* clean up variable names to match declared names, remove June and February, add July and December */
    int daysInSecondHalf = July + August + September + October + November + December;
     
    printf("Days in the first half of the current year: %d\n", daysInFirstHalf);
    printf("Days in the second half of the current year: %d\n", daysInSecondHalf);
    printf("Days in the current year: %d\n", daysInFirstHalf + daysInSecondHalf);

    return 0;
}
