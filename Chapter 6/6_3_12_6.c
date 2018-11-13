/* 6.3.12.6 Functions: part 6 - variables in functions
Chris Wild

Check the program below. We've removed all variable names from the function declaration and body. Complete this code with your
variable names. This function compares two strings and it returns:
-1 - when the first string is before the second string in alphabetical order;
0 - when the contents of both strings are exactly the same;
1 when the first string is after the second string in alphabetical order;
Your version of the program must print the same result as the expected output.

#include <stdio.h>

int stringCompare(char *, char *)
{
    int ;
    for (=0 ; [] != 0 && [] != 0 ; ++)
    {
        if([]>[])
        {
            return 1;
        }
        else if ([]<[])
        {
            return -1;
        }
    }
    if ([] == 0)
    {
        if ([] == 0)
            return 0;
        else
            return -1;
    }
    else
        return 1;
}

int main(void)
{
    int result1 = stringCompare("AAA", "BBB");
    int result2 = stringCompare("AAC", "AAB");
    int result3 = stringCompare("AAC", "AAC");
    int result4 = stringCompare("AAC", "AACC");

    printf("result1: %d\n", result1);
    printf("result2: %d\n", result2);
    printf("result3: %d\n", result3);
    printf("result4: %d\n", result4);

    return 0;
}

Example output

result1: -1
result2: 1
result3: 0
result4: -1
*/

#include <stdio.h>

int stringCompare(char *string1, char *string2)
{
    int loop;

    /* increment loop until 1 or both strings is terminated */
    for (loop=0 ; string1[loop] != 0 && string2[loop] != 0 ; loop++)
    {
        /* if 1 value is greater than another, return appropriate value */
        if(string1[loop] > string2[loop])
        {
            return 1;
        }
        else if (string1[loop] < string2[loop])
        {
            return -1;
        }
    }

    /* if for loop didn't return value, end of 1 or both strings reached while equal */
    if (string1[loop] == 0)
    {
        if (string2[loop] == 0)
            return 0;   /* both strings are at end and are equal */
        else
            return -1;  /* string1 is at end and string2 is not */
    }
    else
        return 1; /* string2 is at end and string 1 is not */
}

int main(void)
{
    int result1 = stringCompare("AAA", "BBB");
    int result2 = stringCompare("AAC", "AAB");
    int result3 = stringCompare("AAC", "AAC");
    int result4 = stringCompare("AAC", "AACC");

    printf("result1: %d\n", result1);
    printf("result2: %d\n", result2);
    printf("result3: %d\n", result3);
    printf("result4: %d\n", result4);

    return 0;
}

/* Actual output (copied from terminal window)

result1: -1
result2: 1
result3: 0
result4: -1
*/
