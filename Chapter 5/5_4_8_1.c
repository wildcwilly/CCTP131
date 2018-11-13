/* 5.4.8.1 Memory on demand
Chris Wild

Write a program that allocates memory of a size requested by the user. This program requests a number from the user and checks if that
number is less than 1 MB (1024*1024). If it's not, then the program prints the message. "Too much memory requested.". In the next
step, the program allocates a one-dimesional array of characters (char) and fills this array with characters from "A" to "Z" (the 1st
element (index 0) contains "A", the 26th element(index 25) contains "Z", the 27th element (index 26) contains "A" and so on). Then, the
program prints the first 400 bytes of an array (or the whole array if it's smaller than 400 characters), 40 characters in each row. To
simplify the program, you can use the break or continue statements. Remember to free up the array memory at the end of the program.
Your version of the program must print the same result as the expected output.

#include <stdio.h>

int main()
{
    *** your code ***
    
    return 0;
}

Example input

100

Example output

ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMN
OPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZAB
CDEFGHIJKLMNOPQRSTUV

Example input

500

Example output

ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMN
OPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZAB
CDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOP
QRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCD
EFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQR
STUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEF
GHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRST
UVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGH
IJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUV
WXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJ

Example input

1200500

Example output

Too much memory requested.
*/

#include <stdio.h>
#include <stdlib.h>

int
main ()
{
    int mem, loop;
    char *charArr;    /* pointer for character array */
    char character = 'A';   /* first character to populate array with */
    
    /* prompt and input amount of memory requested as integer */
    printf ("How much memory to allocate: ");
    scanf ("%d", &mem);

    /* validate amount of memory requested (< 1MB) */
    if (mem < (1024 * 1024))
    {
        /* request memory */
        charArr = (char *) malloc(mem * sizeof(int));
      
        /* verify memory allocated */
        if(charArr != 0)
        {
            /* fill array with repeating alphabet */
            for(loop = 0; loop < mem; loop++)
            {
                /* put character in array element and then increment to next character */
                charArr[loop] = character++;
                
                /* check if character is > Z and reset to A if it is */
                if(character > 'Z')
                {
                    character = 'A';
                }
            }
        }
        else
        {
            puts("Sorry, memory not allocated.");
        }

        if(mem > 400)   /* print up to max of 400 characters */
        {
            mem = 400;
        }
    
        /* print character array 40 characters / line */
        for(loop = 0; loop < mem; loop++)
        {
            printf("%c", charArr[loop]);
        
            /* print new line if 40 characters have been printed */
            if((loop + 1) % 40 == 0)
            {
                printf("\n");
            }
        }
        
        free(charArr);  /* free allocated memory */
    }
    else
    {
        puts ("Too much memory requested.");
    }
    
    return 0;
}

/* Actual output (copied from console window)

How much memory to allocate: 100
ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMN
OPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZAB
CDEFGHIJKLMNOPQRSTUV

How much memory to allocate: 500
ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMN
OPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZAB
CDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOP
QRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCD
EFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQR
STUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEF
GHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRST
UVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGH
IJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUV
WXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJ

How much memory to allocate: 1200500
Too much memory requested.

How much memory to allocate: 43
ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMN
OPQ
*/
