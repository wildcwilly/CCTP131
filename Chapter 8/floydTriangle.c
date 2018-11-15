#include <stdio.h>

#define rowStart 1
#define colStart 0
#define firstNumber 1

void floydTriangle(int size)
{
    int number = firstNumber; /* set up number to be used and incremented in pyramid */
    int row, col;

    for(row = rowStart; row <= size; row++)    /* loop through each row to print */
    {
        for(col=colStart; col < row; col++)    /* number of columns equals number of rows */
        {
            printf("%3d", number++);    /* print number (occupies 3 spaces) then increment */
        }

        printf("\n");   /* add newline to each row */
    }
}