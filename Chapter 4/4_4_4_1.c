/* 4.4.14.1 Arrays: initiators
Chris Wild

Check the program below. Find all possible compilation errors and logic errors. Fix them. Your version of the program must print the
same result as the expected output. Before you use your compiler, try to find the errors only by manual code analysis.

#include <stdio.h>

int main()
{
    int zeros[10] = { 0 };
    int ones[] = { 1, };
    int superOnes[5] = { 1 };
    int fiboSequence[6] = { 1, 1, 2, 3, 5, 8, 13 };
    int i;

    for (i = 0; i<15; i++)
    {
        printf("%d ", zeros[i]);
    }

    puts("");

    for (i = 0; i<4; i++)
    {
        printf("%p ", ones[x]);
    }

    puts("");

    for (i = 0; i<5; i++)
    {
        printf("%e ", superOnes[]);
    }

    puts("");

    for (i = 0; i<6; i++)
    {
        printf("%q ", fiboSequence[i]);
    }

    puts("");

    return 0;
}

Example output

0 0 0 0 0 0 0 0 0 0
1 1
1 1 1 1 1
1 1 2 3 5 8
*/

#include <stdio.h>

int main(void)
{
    int zeros[10] = { 0 };  /* after first 0 initialized, rest of elements initialized to 0 */
    int ones[] = { 1, 1 };   /* add second 1 */
    int superOnes[5] = { 1, 1, 1, 1, 1 };   /* add 4 more 1's */
    int fiboSequence[6] = { 1, 1, 2, 3, 5, 8 }; /* remove #13 (too many) */
    int i;

    /* print 10  0's */
    for (i = 0; i<10; i++)  /* change 15 (out of bounds) to 10 */
    {
        printf("%d ", zeros[i]);
    }
    puts("");   /* puts will add newline */

    /* print 2  1's */
    for (i = 0; i<2; i++)
    {
        printf("%d ", ones[i]); /* change %p to %d, x to i */
    }
    puts("");

    /* print 5  1's */
    for (i = 0; i<5; i++)
    {
        printf("%d ", superOnes[i]); /* change %e to %d, add index i */
    }
    puts("");

    /* print fibonacci sequence */
    for (i = 0; i<6; i++)
    {
        printf("%d ", fiboSequence[i]); /* change %q to %d */
    }
    puts("");

    return 0;
}

/* Actual output (coppied from console window)

0 0 0 0 0 0 0 0 0 0 
1 1 
1 1 1 1 1 
1 1 2 3 5 8 
*/