/* 6.3.12.2 Functions: part 2 - call with parameters
Chris Wild

Check the code below. Add some code to call the functions defined in the code. Analyze what values both functions will return. Connect
the function calls to obtain a proper result (the variable name should contain its expected value). You may use as many different
combinations as you want, but try to find a way to obtain the proper result with the smallest number of function calls. Your version of
the program must print the same result as the expected output.

#include <stdio.h>

int getValue(int paramA, float paramB)
{
    int result = 0;
    if (paramA>10)
    {
        result += 2;
    }
    else
    {
        result += 1;
    }
    if (paramB>5.5)
    {
        result += 4;
    }
    else
    {
        result += 3;
    }

    return result;
}

int getOneOrTwo(int param)
{
    if(param > 5)
        return 2;
    return 1;
}

int main(void)
{
    int fiveValue ; ** your code **
    int sixValue ; ** your code **
    int sevenValue ; ** your code **
    int eightValue ; ** your code **
    int nineValue ; ** your code **

    printf("Five: %d\n", fiveValue);
    printf("Six: %d\n", sixValue);
    printf("Seven: %d\n", sevenValue);
    printf("Eight: %d\n", eightValue);
    printf("Nine: %d\n", nineValue);

    return 0;
}

Example output

Five: 5
Six: 6
Seven: 7
Eight: 8
Nine: 9
*/

#include <stdio.h>

int getValue(int paramA, float paramB)
{
    int result = 0;

    /* if A > 10 and B > 5.5  result = 6
       if A > 10 and B <= 5.5 result = 5
       if A <= 10 and B > 5.5 result = 5
       if A <= 10 and B <= 5.5 result = 4 */
    if (paramA>10)
    {
        result += 2;
    }
    else
    {
        result += 1;
    }
    if (paramB>5.5)
    {
        result += 4;
    }
    else
    {
        result += 3;
    }

    return result;
}

int getOneOrTwo(int param)
{
    if(param > 5)
        return 2;
    return 1;
}

int main(void)
{
    int fiveValue = getValue(5, 5.0) + getOneOrTwo(5);
    int sixValue = getValue(5, 5.0) + getOneOrTwo(6);
    int sevenValue = getValue(11, 6.0) + getOneOrTwo(5);
    int eightValue = getValue(11, 6.0) + getOneOrTwo(6);
    int nineValue = getValue(9, 5.0) + getValue(9, 5.0) + getOneOrTwo(5);

    printf("Five: %d\n", fiveValue);
    printf("Six: %d\n", sixValue);
    printf("Seven: %d\n", sevenValue);
    printf("Eight: %d\n", eightValue);
    printf("Nine: %d\n", nineValue);

    return 0;
}

/* Actual output (copied from console window)

Five: 5
Six: 6
Seven: 7
Eight: 8
Nine: 9
*/
