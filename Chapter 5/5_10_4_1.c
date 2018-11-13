/* 5.10.4.1 Structures: lists
Chris Wild

Write a program that creates a FIFO queue and prints some values. For this lab, use structures, pointers to structures and the malloc
function. Use the values from the array included in the code fragment. Create one element of a queue for one element of an array (there
are 10 elements). After you have created the list, print the first 5 values of the queue and then the first 7 values of the queue. After this
you must free up the memory. After all the operations have been completed, print the message: "Memory is freed". Your version of the
program must print the same result as the expected output.

#include <stdio.h>
#include <stdlib.h>

struct element
{
    int value;
    struct element *next;
};

int main(void)
{
    int values[10] = { 2, 4, 5, 6, 7, 8, 9, 1, 3, 0};
    
    *** your code ***
    
    return 0;
}

Example output

First 5 values
2
4
5
6
7
First 7 values
2
4
5
6
7
8
9
Memory is freed
*/

#include <stdio.h>
#include <stdlib.h>

struct element
{
    int value;
    struct element *next;
};

int main(void)
{
    int values[10] = { 2, 4, 5, 6, 7, 8, 9, 1, 3, 0};
    int loop;
    /* assign pointer for element structures. Point to NULL to show empty */
    struct element *firstElement = NULL;
    struct element *current = NULL;
    struct element *newElement = NULL;

    /* create elements for each array value */
    for(loop = 0; loop < 10; loop++)
    {
        /* allocate memory */
        newElement = (struct element *) malloc(sizeof(struct element));
        
        /* check if successfull */
        if(newElement != NULL)
        {
            if(loop == 0)   /* create first element */
            {
                current = newElement; /* set current element */
                firstElement = newElement;  /* set firstElement */
            }
            else
            {
                current->next = newElement; /* set next element as new element */
                current = current->next;    /* move to the new element */
            }

            current->value = values[loop];  /* set value */
            current->next = NULL;   /* no next element */
        }
        else
        {
            puts("Sorry, memory not allocated.");
            break;  /* leave for loop */
        }
    }
    
    /* print the first 5 elements */
    puts("First 5 values:");
    
    current = firstElement; /* set current element to beginning of list */
    
    for(loop = 0; loop < 5; loop++)
    {
        printf("%d\n", current->value);
        current = current->next;    /* advance to the next element */
    }
    
    /* print the first 7 elements */
    puts("First 7 values:");
    
    current = firstElement; /* set current element to beginning of list */
    
    for(loop = 0; loop < 7; loop++)
    {
        printf("%d\n", current->value);
        current = current->next;    /* advance to the next element */
    }
    
    /* free memory */
    do
    {
        current = firstElement; /* start at beginning of list */
    
        firstElement = current->next;   /* move beginning of list to next element */

        free(current);
    }while(firstElement != NULL);   /* can't test current because it was deleted
                                       firstElement was set to NULL with last element */
    puts("Memory is freed.");
    
    return 0;
}

/* Actual output (copied from console window)

First 5 values:
2
4
5
6
7
First 7 values:
2
4
5
6
7
8
9
Memory is freed.
*/