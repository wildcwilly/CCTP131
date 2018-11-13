/* 6.7.9.11 Main parameters
Chris Wild

Write a program that allows the user to pass the parameters to be executed and compute the results of some mathematical operations.
Your program should support the following operations:
add
sub
mul
All operations require an additional two arguments. Some examples of program calls inlude:
program.exe add 1 3
program.exe sub 2 3
program.exe mul 2 5
When there are no parameters, the parameters contain the wrong numbers or a parameter is invalid, the program should print the
message: "Wrong parameters" (or you can think about your own message with regard to the proper form of program execution). The
first parameter must be one of the three previous strings, while the second and third parameters must be integer numbers. To find out
which of the commands has been passed, you may use the strcmp function. Your version of the program must print the same result as
the expected output. This is one of the tasks which can only be executed in your personal environment. If you use an IDE, you can
check the options of debug/execute to pass the arguments. You don't always need to run the program from outside the IDE.

#include <stdio.h>

int main(int argc, char *argv[])
{
    *** your code ***

    return 0;
}

Example input

add 1 3

Example output

add 1 3: 4

Example input

sub 2 3

Example output

sub 2 3: -1

Example input

mul 2 5

Example output

mul 2 5: 10
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* function declarations */
int add(int op1, int op2);
int sub(int op1, int op2);
int mul(int op1, int op2);

int main(int argc, char *argv[])
{
    int loop, error = 0;
    int op1, op2;

    if(argc == 4)   /* program name, opperator, operand 1, operand 2 */
    {
        /* check if opperands are numbers */
        op1 = atoi(argv[2]);    /* convert first operand to int (will be 0 if invalid) */
        op2 = atoi(argv[3]);    /* convert second operand to int (will be 0 if invalid) */

        /* check opperator */
        if(!strcmp(argv[1], "add"))
        {
            printf("add %d %d: %d\n", op1, op2, add(op1, op2));
        }
        else if(!strcmp(argv[1], "sub"))
        {
            printf("sub %d %d: %d\n", op1, op2, sub(op1, op2));
        }
        else if(!strcmp(argv[1], "mul"))
        {
            printf("mul %d %d: %d\n", op1, op2, mul(op1, op2));
        }
        else
        {
            printf("%s is not a valid math opperator, use \'add\', \'sub\' or \'mul\'.\n", argv[1]);
        }
    }
    else
    {
        puts("Incorrect number of arguments, program needs opperator op1 op2");
    }

    return 0;
}

/* function definitions */
int add(int op1, int op2)
{
    return op1 + op2;
}

int sub(int op1, int op2)
{
    return op1 - op2;
}
int mul(int op1, int op2)
{
    return op1 * op2;
}

/* Actual output (copied from console window)


./a.out add 3 6
add 3 6: 9

./a.out sub 3 6
sub 3 6: -3

./a.out mul 3 6
mul 3 6: 18

./a.out
Incorrect number of arguments, program needs opperator op1 op2

./a.out oops 3 6
oops is not a valid math opperator, use 'add', 'sub' or 'mul'.

./a.out add 5 10
add 5 10: 15
*/