/* 6.6.11.3 Function parameters: part 3
Chris Wild

Write a function that checks which of two given matrices is greater. To simplify the function parameter list, you can assume that both
matrices are equal in size and are square. This function should return:
1 if the first matrix is greater than the second;
-1 if the first matrix is smaller than the second;
0 if both matrices are equal - this means they have exactly the same values.
For this task, we assume that a matrix is smaller than another matrix when the first element which is different is smaller in that matrix.
We analyze matrices from left to right and from top to bottom. Separate the declaration of the function from its full definition. Write a
second function that calls the first one and then prints an appropriate message: "matrixA is smaller than matrixB", "matrixA is greater
than matrixB" or "Both matrices are equal". Write a code to test it with some values - create three matrices, fill them with values and
compare them in all possible (six) cases. Call a second function. As always, do not limit yourself only to the cases already given. Note:
you can use a single pointer to int type to pass the array.

#include <stdio.h>

*** your code ***

int main()
{
    *** your code ***

    return 0;
}

*** your code ***

Example output

Both matrices are equal.
matrixA is smaller than matrixB
matrixA is greater than matrixB
Both matrices are equal.
matrixA is smaller than matrixB
matrixA is greater than matrixB
*/

#include <stdio.h>
#include <stdlib.h> 

/* function declarations */

void compMatrices(int **matrix1, int **matrix2);  /* print result of comparison from call to checkMatrices() */
int checkMatrices(int **matrix1, int **matrix2);  /* compare 2 matrices and return -1 A<B, 0 A==B, 1 A>B */

int main()
{
    int **matrix1, **matrix2, **matrix3;   /* pointer to pointers of ints (multidimensional array) */
    int row, col, error = 0;

    /* make 3 4x4 matrix */
    /* allocate and initialize memory for pointers to 4 ints */
    if(!(matrix1 = (int **) malloc(4 * sizeof(int *))))
        error = 1;
    if(!(matrix2 = (int **) malloc(4 * sizeof(int *))))
        error = 1;
    if(!(matrix3 = (int **) malloc(4 * sizeof(int *))))
        error = 1;;
 
    for(row = 0; row < 4; row++)
    {
        /* allocate memory for int's */
        if(!(matrix1[row] = (int *) malloc(4 * sizeof(int))))
            error = 1;
        if(!(matrix2[row] = (int *) malloc(4 * sizeof(int))))
            error = 1;
        if(!(matrix3[row] = (int *) malloc(4 * sizeof(int))))
            error = 1;

        /* give 4 int's in row their values */
        for(col = 0; col < 4; col++)
        {
            /* make all three matrices match up until the last row/column */
            if(row == 3 && col == 3)
            {
                matrix1[row][col] = row + 1;
                matrix2[row][col] = row + 2;
                matrix3[row][col] = row + 3;
            }
            else
            {
                matrix1[row][col] = 1;
                matrix2[row][col] = 1;
                matrix3[row][col] = 1;
            }
        }
    }

    if(error == 1)
    {
        puts("Sorry, memory not allocated.");
    }
    else
    {
        /* call compare function */
        puts("Matrix 1 vs Matrix 1");
        compMatrices(matrix1, matrix1);

        puts("\nMatrix 1 vs Matrix 2");
        compMatrices(matrix1, matrix2);

        puts("\nMatrix 3 vs Matrix 1");
        compMatrices(matrix3, matrix1);

        puts("\nMatrix 2 vs Matrix 2");
        compMatrices(matrix2, matrix2);

        puts("\nMatrix 2 vs Matrix 3");
        compMatrices(matrix2, matrix3);

        puts("\nMatrix 3 vs Matrix 3");
        compMatrices(matrix3, matrix3);

        /* free allocated memory */
        for(row = 0; row < 4; row++)
        {
            /* free memory of each row and set pointer to NULL */
            free(matrix1[row]);
            matrix1[row] = NULL;

            free(matrix2[row]);
            matrix2[row] = NULL;

            free(matrix3[row]);
            matrix3[row] = NULL;

        }

        /* free each matrix and set pointer to NULL*/
        free(matrix1);
        matrix1 = NULL;

        free(matrix2);
        matrix2 = NULL;

        free(matrix3);
        matrix3 = NULL;
    }

    return 0;
}

/* function definitions */

void compMatrices(int **matrix1, int **matrix2)
{
    int comparison;

    comparison = checkMatrices(matrix1, matrix2);

    if(comparison == -1)
        puts("matrixA is smaller than matrixB.");
    else if(comparison == 1)
        puts("matrixA is greater than matrixB");
    else
        puts("Both matrices are equal.");
}

int checkMatrices(int **matrix1, int **matrix2)
{
    /* go through each row and each column and compare both matrices */
    for(int row = 0; row < 4; row++)
    {
        for(int col = 0; col < 4; col++)
        {
            if(matrix1[row][col] < matrix2[row][col])
            {
                return -1;  /* matrix 1 is less than matrix 2 */
            }
            else if(matrix1[row][col] > matrix2[row][col])
            {
                return 1;   /* matrix 1 is greater than matrix 2 */
            }
        }
    }

    return 0;   /* both are equal */
}

/* Actual output (copied from console window)

Matrix 1 vs Matrix 1
Both matrices are equal.

Matrix 1 vs Matrix 2
matrixA is smaller than matrixB.

Matrix 3 vs Matrix 1
matrixA is greater than matrixB

Matrix 2 vs Matrix 2
Both matrices are equal.

Matrix 2 vs Matrix 3
matrixA is smaller than matrixB.

Matrix 3 vs Matrix 3
Both matrices are equal.
*/