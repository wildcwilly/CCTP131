/* 4.3.14.1 Bubble sort
Chris Wild

Write a program that sorts ten floating-point numbers in descending order. In this case, the data in the array is initialized (in the code
below). The algorithm is described in Chapter 4.3. After each execution of the inner loop, your program should print the values on the
screen (with another small loop). You can use the "%.2f" format in printf. Your version of the program must print the same result as the
expected output.

#include <stdio.h>

int main()
{
    float numbers[10] = {5.6, 4.3, 6.2, 6.4, 7.3, 2.3, 8.3, 9.2, 0.1, 1.9};
    *** your code ***
    
    return 0;
}

Example output

5.60 6.20 6.40 7.30 4.30 8.30 9.20 2.30 1.90 0.10
6.20 6.40 7.30 5.60 8.30 9.20 4.30 2.30 1.90 0.10
6.40 7.30 6.20 8.30 9.20 5.60 4.30 2.30 1.90 0.10
7.30 6.40 8.30 9.20 6.20 5.60 4.30 2.30 1.90 0.10
7.30 8.30 9.20 6.40 6.20 5.60 4.30 2.30 1.90 0.10
8.30 9.20 7.30 6.40 6.20 5.60 4.30 2.30 1.90 0.10
9.20 8.30 7.30 6.40 6.20 5.60 4.30 2.30 1.90 0.10
9.20 8.30 7.30 6.40 6.20 5.60 4.30 2.30 1.90 0.10
9.20 8.30 7.30 6.40 6.20 5.60 4.30 2.30 1.90 0.10
*/

#include <stdio.h>

int main(void)
{
    float numbers[10] = {5.6, 4.3, 6.2, 6.4, 7.3, 2.3, 8.3, 9.2, 0.1, 1.9};
    float swapVar;
    int loop, swapped;
    
    do
    {
        swapped = 0;    /* initialize to no swaps made yet */
        
        for(loop = 0; loop < 9; loop++) /* checking 1 less than total number of elements */
        {
            /* swap if numbers[loop] < numbers[loop + 1] */
            if(numbers[loop] < numbers[loop + 1])
            {
                swapped = 1;    /* set swapped to 1 or true */
                
                swapVar = numbers[loop];
                numbers[loop] = numbers[loop + 1];
                numbers[loop + 1] = swapVar;
            }
        }
        
        /* print current state of numbers array */
        for(loop = 0; loop < 10; loop++)
        {
            printf("%.2f ",numbers[loop]);
        }
        
        printf("\n");   /* add new line to end of output line */
        
    }while(swapped == 1);
    
    return 0;
}

/* Actual output (coppied from console window)

5.60 6.20 6.40 7.30 4.30 8.30 9.20 2.30 1.90 0.10 
6.20 6.40 7.30 5.60 8.30 9.20 4.30 2.30 1.90 0.10 
6.40 7.30 6.20 8.30 9.20 5.60 4.30 2.30 1.90 0.10 
7.30 6.40 8.30 9.20 6.20 5.60 4.30 2.30 1.90 0.10 
7.30 8.30 9.20 6.40 6.20 5.60 4.30 2.30 1.90 0.10 
8.30 9.20 7.30 6.40 6.20 5.60 4.30 2.30 1.90 0.10 
9.20 8.30 7.30 6.40 6.20 5.60 4.30 2.30 1.90 0.10 
9.20 8.30 7.30 6.40 6.20 5.60 4.30 2.30 1.90 0.10 

If I used a second outer for loop instead of a do/while loop
there would be an extra line of sorted numbers printed just
like the example output
*/