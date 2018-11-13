/* 6.3.12.4 Functions: part 4 - the whole function
Chris Wild

Check the program below. Write a function that is a simpler version of the power function. It takes two parameters, one of type double
and one of type int. The first argument is the base and the second is the exponent. You can use a forloop to multiply the first argument
as many times as the second argument says. Because it's a simple version, you are only required to handle positive integers and 0.
Separate the declaration of the function from its full definition. Your version of the program must print the same result as the expected
output.

#include <stdio.h>

*** your code ***

int main(void)
{
    double twentyFiveValue = power(5.0, 2);
    double piSquaredValue = power(3.14159265, 2);
    double piCubedValue = power(3.14159265, 3);
    double bigPower = power(1.23, 20);
    double millionValue = power(10, 6);

    printf("Thirty five: %.4f\n", twentyFiveValue);
    printf("Pi squared: %.4f\n", piSquaredValue);
    printf("Pi cubed: %.4f\n", piCubedValue);
    printf("Not so big number: %.4f\n", bigPower);
    printf("Million: %.4f\n", millionValue);

    return 0;
}

*** your code ***

Example output

Thirty five: 25.0000
Pi squared: 9.8696
Pi cubed: 31.0063
Not so big number: 62.8206
Million: 1000000.0000
*/

#include <stdio.h>

 double power(double number, int exponent);

int main(void)
{
    double twentyFiveValue = power(5.0, 2);
    double piSquaredValue = power(3.14159265, 2);
    double piCubedValue = power(3.14159265, 3);
    double bigPower = power(1.23, 20);
    double millionValue = power(10, 6);

    printf("Twenty five: %.4f\n", twentyFiveValue); /* change Thrity to Twenty to show correct value */
    printf("Pi squared: %.4f\n", piSquaredValue);
    printf("Pi cubed: %.4f\n", piCubedValue);
    printf("Not so big number: %.4f\n", bigPower);
    printf("Million: %.4f\n", millionValue);

    return 0;
}

double power(double number, int exponent)
{
    int loop;
    double result = number;

    /* multiply number by itself exponent times
       start loop at 1 because result has first number already */
    for(loop = 1; loop < exponent; loop++)
    {
        result = result * number;
    }

    return result;
}
 /* Actual output (copied from console window)
 
Twenty five: 25.0000
Pi squared: 9.8696
Pi cubed: 31.0063
Not so big number: 62.8206
Million: 1000000.0000
*/ 