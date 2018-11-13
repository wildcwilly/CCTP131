/* 4.5.2.2  Arrays: text - part 2
Chris Wild

Write a program that asks for 4 numbers as strings from the user and creates a human readable IP address from them. Your main task is
to think about an appropriate data size to store the IP address. After this, your program should print the string. To insert 4 numbers (and
3 dots) into a string, you may use the sprintf function (not described), copy all the characters manually, or use another method more
suitable for you. Your version of the program must print the same result as the expected output.

#include <stdio.h>

int main()
{
    *** your code ***

    return 0;
}

Example input

1
2
3
4

Example output

1.2.3.4

Example input

255
255
255
255

Example output

255.255.255.255
*/

#include <stdio.h>
#include <string.h>

int main(void)  
{
    /* each ip part will max 3 characters plus \n
       ipAddress will hold max 4 * 3 characters + 3 '.' + \n */
    char ipPart[4][4];  /* ipPart[part #][characters] */
    char ipAddress[16];
    int partNumber;

    /* partNumber through each ip part entry and assign to appropriate ip part */
    for(partNumber = 0; partNumber < 4; partNumber++)
    {
        /* prompt and enter ip part as string */
        printf("Enter IP part %d: ", partNumber + 1);
        scanf("%s", ipPart[partNumber]);
    }

    sprintf(ipAddress, "%s.%s.%s.%s", ipPart[0], ipPart[1], ipPart[2], ipPart[3]);
    puts(ipAddress);

    /* This printf also works well without using ipAddress variable as an alternative:
    printf("%s.%s.%s.%s\n", ipPart[0], ipPart[1], ipPart[2], ipPart[3]);

    ** I also tried it with using strcpy and strcat in the loop then:
       printf("%s", ipAddress);

       all worked the same.
    */

    return 0;
}

/* Actual output (copied from console window)

Enter IP part 1: 1
Enter IP part 2: 2
Enter IP part 3: 3
Enter IP part 4: 4
1.2.3.4

Enter IP part 1: 255
Enter IP part 2: 255
Enter IP part 3: 255
Enter IP part 4: 255
255.255.255.255

Enter IP part 1: 192
Enter IP part 2: 168
Enter IP part 3: 0
Enter IP part 4: 1
192.168.0.1
*/