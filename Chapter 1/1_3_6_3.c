/* Module 1.3.6.3-A
Chris Wild

Check the program below. Find all possible compilation errors and logic errors. Fix them. Your version of the program must print the
same result as the expected output. Before you use your compiler, try to find the errors only by manual code analysis.
If you want to improve the variable names, then do so, but remember that variable names have to be as descriptive as possible, and also
as short as possible.

#include <stdio.h>

int main()
{
    int ip Part1 = 027;
    int ip Part2 = 0;
    int ip Part3 = 0;
    int ip Part4 = 1;

    printf("Localhost IP is %d.%d.%d.%d\n", ip Part1, ip Part2, ip Part3, ip Part4);
}

Example output
Localhost IP is 127.0.0.1
*/

#include <stdio.h>

int main(void)  /* add void */
{
    int ip_Part1 = 127; /* add _ to name ip Part1, change value from 027 to 127 */
    int ip_Part2 = 0;   /* add _ to name ip Part2 */
    int ip_Part3 = 0;   /* add _ to name ip Part3 */
    int ip_Part4 = 1;   /* add _ to name ip Part4 */

    printf("Localhost IP is %d.%d.%d.%d\n", ip_Part1, ip_Part2, ip_Part3, ip_Part4); /* fix variable names to match variable declared */
    
    return 0;   /* add return statement */
}
