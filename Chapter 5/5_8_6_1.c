/* 5.8.6.1 Structures
Chris Wild

Write a program that creates the first names and last names of 4 people and then prints them. Create the appropriate structure. Then
create one variable for each person, initialize their values with a constant value (from the code - don't interact with the user this time).
Finally, print each of them on a separate line. Your version of the program must print the same result as the expected output.

#include <stdio.h>

int main()
{
    *** your code ***
    
    return 0;
}

Example output

Mary Smith
James Johnson
Patricia Williams
John Brown
*/

#include <stdio.h>

int main(void)
{
    /* create structure to hold first and last name */
    struct NAME
    {
        char firstName[11];    /* 10 chars max for the samples used */
        char lastName[11];
    };
    
    /* initialize 4 variables of structure type NAME */
    struct NAME name1 = { "Mary", "Smith" };
    struct NAME name2 = { "James", "Johnson" };
    struct NAME name3 = { "Patricia", "Williams" };
    struct NAME name4 = { "John", "Brown" };
    
    /* print each name using . selector */
    printf("%s %s\n", name1.firstName, name1.lastName);
    printf("%s %s\n", name2.firstName, name2.lastName);
    printf("%s %s\n", name3.firstName, name3.lastName);
    printf("%s %s\n", name4.firstName, name4.lastName);
    
    return 0;
}

/* Actual output (copied from console window)

Mary Smith
James Johnson
Patricia Williams
John Brown
*/