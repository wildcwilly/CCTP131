/* Module 1.3.6.1-A
Chris Wild

Check the program below. Find all possible compilation errors and logic errors. Fix them. Your version of the program must print the
same result as the expected output. Before you use your compiler, try to find the errors only by manual code analysis.
If you want to improve the variable names, then do so, but remember that variable names have to be as descriptive as possible, and also
as short as possible.

#include <stdio.h>

int main()
{
    int simpleVari able = 10;
    printf("The value of ten is: %d \n", otherVariable);

    return 0;
}

Example output
The value of ten is: 10
*/

#include <stdio.h>

int main(void)  /* add void */
{
    int SimpleVariable = 10; /* remove space and capitalize S for convention */
    printf("The value of ten is: %d \n", SimpleVariable); /* change otherVariable (doesn't exist) to SimpleVariable (Declared) */

    return 0;
}
