/* Module 1.3.1.3-A lab 
Chris Wild

Check the program below. Find all possible compilation errors and logic errors. Fix them. Your version of the program must print the
same result as the expected output. Before you use your compiler, try to find the errors only by manual code analysis.

#include <stdio.h>

int main()
{
    printf("The value of seven is: %d \n", 0087);
    printf("The value of eight is: %d \n", (8000x - 7992x)/x);
}

Example output
The value of seven is: 7
The value of eight is: 8
*/

#include <stdio.h>

int main(void)  /* add void */
{
    printf("The value of seven is: %d \n", 7);  /* change 0087 to 7 */
    printf("The value of eight is: %d \n", 8);  /* change (8000x - 7992x)/x to 8 */
    
    return 0;   /* add return statement */
}