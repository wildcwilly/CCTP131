/* 5.9.2.1 Structures: pointers to structures
Chris Wild

Check the program below. Add code to print all the neighbors in ascending and descending order. Use only pointers and loops (don't use
the houseX variables). Your version of the program must print the same result as the expected output.

#include <stdio.h>

#include <stdlib.h>

struct house
{
    int houseNumber;
    struct house *previous;
    struct house *next;
};

int main(void)
{
    struct house house1;
    struct house house2;
    struct house house3;
    struct house house4;
    house1.houseNumber = 1;
    house2.houseNumber = 3;
    house3.houseNumber = 5;
    house4.houseNumber = 7;
    house1.next = &house2;
    house2.next = &house3;
    house3.next = &house4;
    house4.next = NULL;
    house1.previous = NULL;
    house2.previous = &house1;
    house3.previous = &house2;
    house4.previous = &house3;
    struct house *firstHouse = &house1;
    struct house *lastHouse = &house4;
    struct house *current;
    
    *** your code ***

    return 0;
}

Example output

Ascending order:
1357
Descending order:
7531
*/

#include <stdio.h>

#include <stdlib.h>

struct house
{
    int houseNumber;
    struct house *previous;
    struct house *next;
};

int main(void)
{
    struct house house1;
    struct house house2;
    struct house house3;
    struct house house4;
    house1.houseNumber = 1;
    house2.houseNumber = 3;
    house3.houseNumber = 5;
    house4.houseNumber = 7;
    house1.next = &house2;
    house2.next = &house3;
    house3.next = &house4;
    house4.next = NULL;
    house1.previous = NULL;
    house2.previous = &house1;
    house3.previous = &house2;
    house4.previous = &house3;
    struct house *firstHouse = &house1;
    struct house *lastHouse = &house4;
    struct house *current;
    
    /* print houses in ascending order */
    current = firstHouse;   /* initialise current house */
    
    puts("Ascending order:");
    
    while(current != NULL)  /* last house has NULL as next house */
    {
        printf("%d\n", current->houseNumber);   /* print house number */
        current = current->next;    /* move current to next house */
    }

    /* print houses in descending order */
    current = lastHouse;   /* initialise current house */
    
    puts("Descending order:");
    
    while(current != NULL)  /* first house has NULL as previous house */
    {
        printf("%d\n", current->houseNumber);   /* print house number */
        current = current->previous;    /* move current to previous house */
    }

    return 0;
}

/* Actual output (copied from console window)

Ascending order:
1
3
5
7
Descending order:
7
5
3
1
*/