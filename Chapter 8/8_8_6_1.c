/* 8.8.6.1 Preprocessing: part 1
Chris Wild

Do you remember the lab from chapter 6.8.13? Take the sources from that lab and modify them. Add #define and #ifndef in the header
file (triangles.h) to avoid multiplied compilations. Add a macro to log information to the screen, call this macro before each function call,
and pass the name of the function into the macro. The macro should get the line and file name from the other macros. Your version of
the program must print the same result as the expected output.

#include <stdio.h>

*** your code that includes a header***

int main()
{
    *** your code ***

    return 0;
}

*** other files with your code ***

Example input

5

Example output

In line 13, file path\main.c, before the normalTriangle function
\
\\
\\\
\\\\
In line 15, file path\main.c, before the floydsTriangle function
1
2 3
4 5 6
7 8 9 10

Example input

3

Example output

3
In line 13, file path\main.c, before the normalTriangle function
\
\\
In line 15, file path\main.c, before the floydsTriangle function
1
2 3
*/

#define SCREENLOG(funcName) \
    printf("In line %d, file %s, before the %s function\n", __LINE__, __FILE__, #funcName);

#include <stdio.h>
#include "triangle.h"

int main()
{
    int number;

    /* prompt and enter size of pyramid as integer */
    printf("Enter the size of the pyramid: ");
    scanf("%d", &number);

    SCREENLOG(classicTriangle);
    classicTriangle(number);    /* call classicTriangle() from external file */

    SCREENLOG(floydTrangle);
    floydTriangle(number);  /* call floydTriangle() from external file */

    return 0;
}

/* Actual output (copied from console window)

 Enter the size of the pyramid: 5
In line 67, file c:\Users\#####....\CCTP131\Chapter 8\8_8_6_1.c, before the classicTriangle function
\
\\
\\\
\\\\
\\\\\
In line 70, file c:\Users\#####....\CCTP131\Chapter 8\8_8_6_1.c, before the floydTrangle function
  1
  2  3
  4  5  6
  7  8  9 10
 11 12 13 14 15
 */