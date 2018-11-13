/* Lab 3.2.11.1
Chris Wild

The most popular, human-readable way to write an IP (to be precise, IPv4) is to write 4 numbers separated with dots (i.e. 127.0.0.1).
But it can also be written as one 32-bit number. To get this form, you must multiply all the parts of the IP number by powers of 256
(256*256*256, 256*256, 256 and 1 - don't use precomputed versions). Write a program that asks for 4 numbers and then checks if
these numbers are more than or equal to 0 and less than or equal to 255. Next, the program should write both forms of the IP address:
human-readable and 32-bit number. Use the unsigned long int type; to print it, use the "%lu" format in printf. If any of the address parts
don't meet the given criteria (0<=x<=255) then print only this simple error message: "Incorect IP Address.". Your version of the
program must print the same result as the expected output.

#include <stdio.h>

int main()
{
    *** your code ***

    return 0;
}

Example input

127
0
0
1

Example output

Human readable IP address is: 127.0.0.1
IP address as a 32-bit number: 2130706433

Example input

192
168
1
1

Example output

Human readable IP address is: 192.168.1.1
IP address as a 32-bit number: 3232235777

Example input

1
268
1
1

Example output

Incorrect IP Address.
*/

#include <stdio.h>

int main(void)
{
    int ipPart[4], number;
    int validNumber = 1;    /* preset to 1 to assume valid numbers */
    unsigned long ipAddress;

    /* loop through each of the 4 IP numbers */
    for(number = 0; number < 4; number++)
    {
        /* prompt for and enter 4 numbers of IP address, place in ipPart array */
        printf("Enter  number %d of the IP address (0 - 255): ", number + 1);
        scanf("%d", &ipPart[number]);
 
        /* validate number is in allowable range (0 - 255) */
        if(ipPart[number] < 0 || ipPart[number] >255)
        {
            validNumber = 0; /* an invalid number was entered */
        }
    }

    /* print IP address if numbers were valid or give error message */
    if(validNumber)
    {
        printf("Human readable IP address is: %d.%d.%d.%d\n", ipPart[0], ipPart[1], ipPart[2], ipPart[3]);

        /* calculate 32-bit IP address */
        ipAddress = 256 * 256 * 256 * (unsigned long)ipPart[0];         /* part 1 (256^3 * number) */
        ipAddress = ipAddress + (256 * 256 * (unsigned long)ipPart[1]); /* part 1 (256^2 * number) */
        ipAddress = ipAddress + (256 * (unsigned long)ipPart[2]);       /* part 1 (256^1 * number) */
        ipAddress = ipAddress + (unsigned long)ipPart[3];               /* last part just add */

        printf("IP address as a 32-bit number: %lu\n", ipAddress);
    }
    else
    {
        printf("Incorrect IP Address.\n");
    }

    return 0;
}

/* Actual output (copied from Console window)

Enter  number 1 of the IP address (0 - 255): 127
Enter  number 2 of the IP address (0 - 255): 0
Enter  number 3 of the IP address (0 - 255): 0
Enter  number 4 of the IP address (0 - 255): 1
Human readable IP address is: 127.0.0.1
IP address as a 32-bit number: 2130706433
chris@chris-GL753VD:~/Documents/Programming/CCTP131/Lab 3$ ./lab3 
Enter  number 1 of the IP address (0 - 255): 192
Enter  number 2 of the IP address (0 - 255): 168
Enter  number 3 of the IP address (0 - 255): 1
Enter  number 4 of the IP address (0 - 255): 1
Human readable IP address is: 192.168.1.1
IP address as a 32-bit number: 3232235777
chris@chris-GL753VD:~/Documents/Programming/CCTP131/Lab 3$ ./lab3 
Enter  number 1 of the IP address (0 - 255): 1
Enter  number 2 of the IP address (0 - 255): 268
Enter  number 3 of the IP address (0 - 255): 1
Enter  number 4 of the IP address (0 - 255): 1
Incorrect IP Address.

*/
