#include <stdio.h>

void floydTriangle(int size)
{
    int number = 1; /* set up number to be used and incremented in pyramid */
    int row, col;

    for(row = 1; row <= size; row++)    /* loop through each row to print */
    {
        for(col=0; col < row; col++)    /* number of columns equals number of rows */
        {
            printf("%3d", number++);    /* print number (occupies 3 spaces) then increment */
        }

        printf("\n");   /* add newline to each row */
    }
}