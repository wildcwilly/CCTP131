/* 6.3.12.5 Functions: part 5 - adding a definition
Chris Wild

Check the program below. Write a body of functions to obtain the correct result. The function getValue must return:
25 - when paramA is greater than or equal to 5 and paramB is greater than or equal to 2.5;
30 - when paramA is greater than or equal to 5 and paramB is less than 2.5;
30 - when paramA is less than 5 and paramB is greater than or equal to 2.5;
35 - when paramA is less than 5 and paramB is less than 2.5.
The function getExclusive must return:
2 - when one and only one of the given values is equal to 2;
0 - in all other cases.
Your version of the program must print the same result as the expected output.

#include <stdio.h>

int getValue(int paramA, float paramB);
int getExclusive(int paramA, int paramB);

int main(void)
{
    int thirtyFiveValue = getValue(4, 2.4);
    int thirtyValue1 = getValue(4, 2.6);
    int thirtyValue2 = getValue(6, 2.4);
    int twentyValue = getValue(6, 2.6);
    int twoValue = getExclusive(2, 1);
    int zeroValue = getExclusive(2, 2);

    printf("Thirty five: %d\n", thirtyFiveValue);
    printf("Thirty: %d\n", thirtyValue1);
    printf("Thirty: %d\n", thirtyValue2);
    printf("Twenty: %d\n", twentyValue);
    printf("Two: %d\n", twoValue);
    printf("Zero: %d\n", zeroValue);

    return 0;
}

*** your code ***

Example output

Thirty five: 35
Thirty: 30
Thirty: 30
Twenty: 25
Two: 2
Zero: 0
*/

#include <stdio.h>

int getValue(int paramA, float paramB);
int getExclusive(int paramA, int paramB);

int main(void)
{
    int thirtyFiveValue = getValue(4, 2.4);
    int thirtyValue1 = getValue(4, 2.6);
    int thirtyValue2 = getValue(6, 2.4);
    int twentyValue = getValue(6, 2.6);
    int twoValue = getExclusive(2, 1);
    int zeroValue = getExclusive(2, 2);

    printf("Thirty five: %d\n", thirtyFiveValue);
    printf("Thirty: %d\n", thirtyValue1);
    printf("Thirty: %d\n", thirtyValue2);
    printf("Twenty: %d\n", twentyValue);
    printf("Two: %d\n", twoValue);
    printf("Zero: %d\n", zeroValue);

    return 0;
}

int getValue(int paramA, float paramB)
{
    if(paramA >= 5 && paramB >= 2.5)
    {
        /* just return value and leave function */
        return 25;
    }

    if((paramA >= 5 && paramB < 2.5) || (paramA < 5 && paramB >= 2.5))
    {
        /* just return value and leave function */
        return 30;
    }

    /* both values will be less than */
    return 35;
}

int getExclusive(int paramA, int paramB)
{
    /* return 2 when ONLY 1 of the params = 2 */
    if((paramA == 2 && paramB != 2) || (paramA != 2 && paramB == 2))
       return 2;
    return 0;
}

/* Actual output (copied from console window)

Thirty five: 35
Thirty: 30
Thirty: 30
Twenty: 25
Two: 2
Zero: 0
*/