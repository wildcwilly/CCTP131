/* Lab 3.3.9.1  Type conversions: part 1
Chris Wild

Write a program that takes one floating-point number, converts it to an integer number, and then prints a description of the given
number. Descriptions for numbers:
numbers greater than or equal to 1 and less than 2 - Very bad.
numbers greater than or equal to 2 and less than 3 - Bad.
numbers greater than or equal to 3 and less than 4 - Neutral.
numbers greater than or equal to 4 and less than 5 - Good.
numbers greater than or equal to 5 and less than 6 - Very good.
When a number is out of the given range (1<=x<6), then the program prints nothing. Your version of the program must print the same
result as the expected output.

#include <stdio.h>

int main()
{
    *** your code ***

    return 0;
}

Example input

1.5

Example output

Very bad.

Example input

2.9

Example output

Bad.              <-- questioning the expected output for this number as it
Neutral.              does not meet the requirements for the program  
Good.
Very good.

Example input

4.77

Example output

Good.
*/

#include <stdio.h>

int main(void)
{
    float inputNumber;
    int convertedNumber;

    /* prompt for and input a floating point number */
    printf("Please enter a decimal number: ");
    scanf("%f", &inputNumber);

    /* convert number from float to int */
    convertedNumber = (int)inputNumber;

    /* select appropriate output based on value of integer */
    /* no output if value is out of range (1<=x<6) */
    if(convertedNumber >= 1 && convertedNumber < 2)
    {
        printf("Very bad.\n");
    }
    else if(convertedNumber >= 2 && convertedNumber < 3)
    {
        printf("Bad.\n");
    }
    else if(convertedNumber >= 3 && convertedNumber < 4)
    {
        printf("Neutral.\n");
    }
    else if(convertedNumber >= 4 && convertedNumber < 5)
    {
        printf("Good.\n");
    }
    else if(convertedNumber >= 5 && convertedNumber < 6)
    {
        printf("Very good.\n");
    }

    return 0;
}

/* Actual output (copied from Console window)

Please enter a decimal number: 0.5

Please enter a decimal number: 1.0
Very bad.

Please enter a decimal number: 1.5
Very bad.

Please enter a decimal number: 2.0
Bad.

Please enter a decimal number: 2.9  <-- questioning the expected output for this number as it
Bad.                                    does not meet the requirements for the program

Please enter a decimal number: 3.0
Neutral.

Please enter a decimal number: 4.9
Good.

Please enter a decimal number: 5.0
Very good.

Please enter a decimal number: 6.0
*/
