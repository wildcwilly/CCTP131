/* 4.9.7.1      Strings
Chris Wild

Write a program that asks for the IP address in a human readable form, creates three substrings, and prints them. These substrings are
created from parts 3, 2 and 1 of the last part of the IP address. These substrings should be created with the use of pointers or array
indexing (whichever you prefer). If a given string doesn't have 3 dots, then the program should print the message: "Error: not a valid
address.". Your program should also check if a given string consists only of digits and dots and that there are no more than 3 digits in
each block. You don't have to check if the numbers are smaller than 256. Note: You can use the isdigit function, but you can also write
your own code to check whether or not a character is a digit. Your version of the program must print the same result as the expected
output.

#include <stdio.h>

int main()
{
    *** your code ***

    return 0;
}

Example input

255.255.255.255

Example output

Last 3 parts: 255.255.255
Last 2 parts: 255.255
Last 1 part: 255

Example input

127.0.0.1

Example output

Last 3 parts: 0.0.1
Last 2 parts: 0.1
Last 1 part: 1

Example input

255.2555.255.255

Example output

Error: not a valid address.
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char ipAddress[20]; /* string to hold entire IP address */
    char *addressPtr = ipAddress;   /* pointer to ipAddress for manipulations */
    char part[4][4] = { 0 };    /* array to each part[#][3 chars + \n], prepopulate with 0's */
    int loop;
    int numChars = 0;   /* number of characters in part */
    int errors = 0; /* flag for any errors */
    int dots = 0;   /* count of dots in IP address (must be 3) */

    /* prompt and input IP address as string */
    printf("Enter an IP address: ");
    scanf("%s", ipAddress);

    /* break ipAddress down into each of 4 parts */
    do
    {
        /* check if character is dot or \0 (end of string) */
        if(*addressPtr == '.' || *addressPtr == '\0')
        {
            strncpy(part[dots], addressPtr - numChars, numChars);    /* copy previous 3 characters into part */

            if(*addressPtr == '.')
            {
                dots++;
            }

            if(dots <= 3)    /* validate does not exceed 3 */
            {
                numChars = 0;   /* reset numChars for next part */
            }
            else
            {
                errors = 1; /* set errors flag */
                break;  /* leave for loop, no reason to continue */
            }
        }
        else
        {
            if(++numChars <= 3)  /* increase number of characters count and check if too many characters */
            {
                /* check if character is a number */
                if(*addressPtr < '0' || *addressPtr > '9')
                {
                    errors = 1; /* set errors flag */
                    break;  /* leave for loop (no reason to continue) */
                }
            }
            else
            {
                errors = 1; /* set errors flag */
                break;  /* leave for loop (no reason to continue) */
            }
        }
    }while(*addressPtr++ != '\0');  /* if addressPtr is not end of line, increment it and continue loop */

    if(errors != 0 || dots < 3)
    {
        puts("Error: not a valid address.");
    }
    else
    {
        printf("Last 3 parts: %s.%s.%s\n", part[1], part[2], part[3]);
        printf("Last 2 parts: %s.%s\n", part[2], part[3]);
        printf("Last 1 part: %s\n", part[3]);
    }

    return 0;
}

/* Actual output (copied from console window)

Enter an IP address: 192.168
Error: not a valid address.

Enter an IP address: 192.168.0.1.3
Error: not a valid address.

Enter an IP address: g.1.1.1
Error: not a valid address.

Enter an IP address: 255.255.255.255
Last 3 parts: 255.255.255
Last 2 parts: 255.255
Last 1 part: 255

Enter an IP address: 192.168.0.1
Last 3 parts: 168.0.1
Last 2 parts: 0.1
Last 1 part: 1

Enter an IP address: 255.2555.0.1
Error: not a valid address.
*/