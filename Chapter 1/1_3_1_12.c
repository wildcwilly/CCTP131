/* Module 1.3.1.12-A
Chris Wild

Comments are not always the best way to say something in a code. Sometimes it's much better to leave some information in the code. In
the worst case scenario, comments can lie to the user/programmer (you should never do that on purpose). It's a good idea to use
readable variable names. Sometimes it's better to divide your code into named pieces (later we'll call these pieces functions). In some
situations, it's a good idea to write the steps of calculations in a clearer way. The code below contains some of these situations; try to
improve it (and remove comments - sometimes removing comments will be an improvement in itself). If you don't understand all of the
code here, don't worry. Try to focus on the comments.

Original code not included due to nested comments

- Variable v was too vague, deduced that it was 3 days from the value, comment, and values of other variables
- Made generic variables to make calculations more readable
- Based on the original code, I figured that the second zzz variable was an incorrect duplicate
- Printed out each of the calculations from original code, even though it only wanted the value of v printed
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int SecondsInMinute = 60;
    int MinutesInHour = 60;

    float pi=3.141526;
    
    printf("3 Hours is %d seconds\n", 3 * MinutesInHour * SecondsInMinute);
    printf("3 minutes is %d seconds\n", 3 * SecondsInMinute);
    printf("6 minutes is %d seconds\n", 6 * SecondsInMinute);
    printf("Value of Pi is %f\n", pi);
    
    return 0;
}
