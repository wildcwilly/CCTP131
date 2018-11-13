/* 2.5.17.3 Lab
Chris Wild

Write a small program which prints figure like in the output below. Your version of the program must print the same result as the
expected output. Remember, if you want to print the "\" character, then you have to escape it, like this "\\".

#include <stdio.h>

int main()
{
    *** your code ***
    
    return 0;
}  

Example output

   ^
  / \
 /   \
<     >
 \   /
  \ /
   v
*/

#include <stdio.h>

int main(void)
{
    printf("%4c\n", '^');
    printf("%3c \\\n", '/');
    printf("%2c%4c\n", '/', '\\');
    printf("%c%6c\n", '<', '>');
    printf("%2c%4c\n", '\\', '/');
    printf("%3c /\n", '\\');
    printf("%4c\n", 'v');
    
    return 0;
}

/* Actual output (Copied from console window)

   ^
  / \
 /   \
<     >
 \   /
  \ /
   v

*/