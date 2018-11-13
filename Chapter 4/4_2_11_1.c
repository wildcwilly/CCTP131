/* 4.2.11.1 Arrays: part 1
Chris Wild

The Fibonacci sequence is a series of natural numbers built up by a simple formula:
The first Fibonacci number is equal to 1;
The second Fibonacci number is equal to 1 too;
The third, fourth and every subsequent Fibonacci number is equal to the sum of the two previous numbers.
This means that the first 5 Fibonacci numbers look as follows:
1, 1, 2, 3, 5
Write a program that prints this Fibonacci sequence and two of its subsequent numbers. It should print the first 10 numbers from the
Fibonacci sequence, and then it should print only the odd numbers (1st, 3rd, 5th, 7th and 9th), and after that, only the even numbers
(2nd, 4th, 6th, 8th and 10th). Your version of the program must print the same result as the expected output.

#include <stdio.h>

int main()
{
    *** your code ***
    

    return 0;
}

Example output

1
1
2
3
5
8
13
21
34
55
1
2
5
13
34
1
3
8
21
55
*/

#include <stdio.h>

int main(void)  
{
    int Fibonacci[10] = {1,1,2,3,5,8,13,21,34,55};
    int loop;
    
    /* print all 10 Fibonacci numbers */
    for(loop = 0; loop < 10; loop++)
    {
        printf("%d\n", Fibonacci[loop]);
    }
    
    /* print Fibonacci numbers with even number index */
    for(loop = 0; loop < 10; loop = loop + 2)
    {
        printf("%d\n", Fibonacci[loop]);
    }
    
    /* print Fibonacci numbers with odd number index */
    for(loop = 1; loop < 10; loop = loop + 2)
    {
        printf("%d\n", Fibonacci[loop]);
    }
    
    return 0;
}

/* Actual output (copied from console window)
1
1
2
3
5
8
13
21
34
55
1
2
5
13
34
1
3
8
21
55
*/