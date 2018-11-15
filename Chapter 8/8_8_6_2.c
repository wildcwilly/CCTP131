/* 8.8.6.2 Preprocessing: part 2
Chris Wild

Write a function that checks whether or not a given string is a valid IP address (in human-readable form, of course). This function
should return 1 if the address is valid, and 0 if not. Your function should check if:
there are 4 parts in the string, separated by dots;
each part contains only digits;
each number is in the range of 0 to 255, inclusive.
For converting string fragments to integer values, you can use the strtol, atoi or sscanf functions. Separate the declaration of the
function from its full definition. Write a second function that calls the first one and then prints an appropriate message: "127.0.0.1 is a
valid IP address" or "a.b.c.d is not a valid IP address". Write a code to test it with values - call the second function. Do not limit yourself
only to those values that we have given to you.
We did a similar task in Lab 6.6.11.2. The only difference between this lab and that one is that here you need to define all the constants
(even one-character constants!) with preprocessor defines. You should also give them appriopriate names. After the whole process, you
can (because you are an advanced user now) judge which option is better: to change all the possible constants or to leave some of them
in their natural form.

#include <stdio.h>

*** your code ***

int main()
{
    *** your code ***

    return 0;
}

*** your code ***

Example output

127.0.0.1 is a valid IP address
127.0.01 is not a valid IP address
127.0..1 is not a valid IP address
127.zero.0.1 is not a valid IP address
127.297.0.1 is not a valid IP address
127.2555.0.1 is not a valid IP address
*/

#define PROMPT "Enter an IP address (Enter \'q\' to quit): "
#define QUIT 'q'
#define VALIDIP 1
#define INVALIDIP 0
#define MIN 0
#define MAX 256
#define NUMVALPARTS 4

#include <stdio.h>

/* function declarations */

/*  isValidIP prints a statement if IP valid or not
    input: string
    output: void */
void isValidIP(char *ip);

/*  checkIP checks if IP address is valid or not
    input: string
    output: INVALIDIP if invalid IP, VALIDIP if valid IP */
int checkIP(char *ip);

int main()
{
    char ip[20];

    /* keep asking for and validating ip address until q is entered */
    do
    {
        /* prompt and enter IP address as string */
        printf(PROMPT);
        scanf("%s", ip);

        if(ip[0] != QUIT) /* not exit character, check iP */
            isValidIP(ip); /* validate IP and print result */
    }while(ip[0] != QUIT);

    return 0;
}

/* function definitions */

void isValidIP(char *ip)
{
    if(checkIP(ip) == INVALIDIP)    /* call checkIP() with pointer address of ip and print response based on return value 1 or 0 */
        printf("%s is not a valid IP address.\n", ip);
    else
        printf("%s is a valid IP address\n", ip);
}

int checkIP(char *ip)
{
    int part[5];    /* IP address parts (part 5 is to check for too many parts) */
    int validParts, loop;

    /* use sscanf to check ip string and return 4 integer parts.
       if any of the parts is not a valid integer, sscanf will return the number of valid parts
       which will be less than 4. If 5 parts are found, there is at least 1 extra decimal place */
    validParts = sscanf(ip, "%d.%d.%d.%d.%d", &part[0], &part[1], &part[2], &part[3], &part[4]);

    if(validParts == NUMVALPARTS)
    {
        /* validate all 4 parts are in valid value range */
        for(loop = MIN; loop < NUMVALPARTS; loop++)
        {
            if((part[loop] >= MIN && part[loop] < MAX))
            return VALIDIP;
        }
    }

    /* if number was not valid and function did not return 1 then return 0 for invalid IP */
    return INVALIDIP;
}

/* Actual output (copied from console window)

Enter an IP address (Enter 'q' to quit): 125.255.0.1
125.255.0.1 is a valid IP address
Enter an IP address (Enter 'q' to quit): 0.0.0.0
0.0.0.0 is a valid IP address
Enter an IP address (Enter 'q' to quit): 0.0.0.0.0
0.0.0.0.0 is not a valid IP address.
Enter an IP address (Enter 'q' to quit): 0.0.0
0.0.0 is not a valid IP address.
Enter an IP address (Enter 'q' to quit): a
a is not a valid IP address.
Enter an IP address (Enter 'q' to quit): a.a.a.a
a.a.a.a is not a valid IP address.
Enter an IP address (Enter 'q' to quit): q
*/