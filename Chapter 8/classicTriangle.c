#include <stdio.h>

#define rowStart 1
#define colStart 0


void classicTriangle(int size)
{
    int row, col;

    for(row = rowStart; row <= size; row++)    /* loop through each row to print */
    {
        for(col = colStart; col < row; col++)  /* number of columns equals number of rows */
        {
            printf("\\");   /* prints single '\' (needs escape character) */
        }

        printf("\n");   /* add newline at end of each row */
    }
}