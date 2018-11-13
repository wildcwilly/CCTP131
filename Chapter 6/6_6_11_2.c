/* 6.6.11.2 Function parameters: part 2
Chris Wild

Write a function that checks whether or not a given string is a valid IP address (in human-readable form, of course). This function
should return 1 if the address is valid, and 0 if not. Your function should check if:
there are 4 parts in the string, separated by dots;
each part contains only digits,
each number is in the range of 0 to 255, inclusive.
For converting string fragments to integer values you can use the strtol, atoi or sscanf functions. Separate the declaration of the function
from its full definition. Write a second function that calls the first one and then prints an appropriate message: "127.0.0.1 is a valid IP
address" or "a.b.c.d is not a valid IP address". Write a code to test it with some values - call a second function. Do not limit yourself
only to those values we have given you.
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

#include <stdio.h>

/* function declarations */

/*  isValidIP prints a statement if IP valid or not
    input: string
    output: void */
void isValidIP(char *ip);

/*  checkIP checks if IP address is valid or not
    input: string
    output: 0 if invalid IP, 1 if valid IP */
int checkIP(char *ip);

int main()
{
    char ip[20];

    /* keep asking for and validating ip address until q is entered */
    do
    {
        /* prompt and enter IP address as string */
        printf("Enter an IP address (Enter \'q\' to quit): ");
        scanf("%s", ip);

        if(ip[0] !='q' && ip[0] != 'Q') /* not exit character, check iP */
            isValidIP(ip); /* validate IP and print result */
    }while(ip[0] != 'q' && ip[0] != 'Q');   /* might as well check for capital Q also */

    return 0;
}

/* function definitions */

void isValidIP(char *ip)
{
    if(checkIP(ip) == 0)    /* call checkIP() with pointer address of ip and print response based on return value 1 or 0 */
        printf("%s is not a valid IP address.\n", ip);
    else
        printf("%s is a valid IP address\n", ip);
}

int checkIP(char *ip)
{
    int part1, part2, part3, part4, part5;    /* IP address parts (part 5 is to check for too many parts) */
    int validParts;

    /* use sscanf to check ip string and return 4 integer parts.
       if any of the parts is not a valid integer, sscanf will return the number of valid parts
       which will be less than 4. If 5 parts are found, there is at least 1 extra decimal place */
    validParts = sscanf(ip, "%d.%d.%d.%d.%d", &part1, &part2, &part3, &part4, &part5);

    if(validParts == 4)
    {
        /* validate all 4 parts are in valid value range */
        if((part1 >= 0 && part1 < 256) && (part2 >= 0 && part2 < 256) && (part3 >= 0 && part3 < 256) && (part4 >= 0 && part4 < 256))
            return 1;
    }

    /* if number was not valid and function returned 1 then return 0 for invalid IP */
    return 0;
}

/* Actual output (copied from console window)

Enter an IP address (Enter 'q' to quit): 192.168.0.1
192.168.0.1 is a valid IP address
Enter an IP address (Enter 'q' to quit): 255.255.255.255
255.255.255.255 is a valid IP address
Enter an IP address (Enter 'q' to quit): 255.256.255.255255.256.255.255 is not a valid IP address.
Enter an IP address (Enter 'q' to quit): 123
123 is not a valid IP address.
Enter an IP address (Enter 'q' to quit): 255.255.q
255.255.q is not a valid IP address.
Enter an IP address (Enter 'q' to quit): 192.168.0.1.2192.168.0.1.2 is not a valid IP address.
Enter an IP address (Enter 'q' to quit): 127.0..1
127.0..1 is not a valid IP address.
Enter an IP address (Enter 'q' to quit): 127.0.0.1
127.0.0.1 is a valid IP address
Enter an IP address (Enter 'q' to quit): 0.0.0.00.0.0.0 is a valid IP address
Enter an IP address (Enter 'q' to quit): q
*/
