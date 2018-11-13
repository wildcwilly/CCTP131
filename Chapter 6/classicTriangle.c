#include <stdio.h>

void classicTriangle(int size)
{
    int row, col;

    for(row = 1; row <= size; row++)    /* loop through each row to print */
    {
        for(col = 0; col < row; col++)  /* number of columns equals number of rows */
        {
            printf("\\");   /* prints single '\' (needs escape character) */
        }

        printf("\n");   /* add newline at end of each row */
    }
}