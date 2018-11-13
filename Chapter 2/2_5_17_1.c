/* 2.5.17.1 Lab
Chris Wild

According to ISO 8601, many countries use the YYYY-MM-DD date format, where YYYY is a four-digit year, MM means a two-digit
month, and DD means a two-digit day (one letter means no leading zeros). Local conventions can vary, and sometimes include formats
like DD-MM-YYYY or MM-DD-YYYY. This time, your task is to print values in 4 different formats. Check the program below. Find all
possible compilation errors and logic errors. Fix them, but you may not change any character values. Your version of the program must
print the same result as the expected output. Before you use your compiler, try to find the errors only by manual code analysis.

#include <stdio.h>

int main()
{
    int day = 20;
    int month = 2;
    int year = 2016;
    printf("%04d-%02d-%02d - YYYY-MM-DD format - ISO 8601\n", year month day year month day);
    printf("%02d-%02d-%04d - MM-DD-YYYY format\n", year month day year month day);
    printf("%02d-%02d-%04d - DD-MM-YYYY format\n", year month day year month day);
    printf("%d-%d-%d - D-M-Y format\n", year month day year month day);

    return 0;
}

Example output

2016-02-20 - YYYY-MM-DD format - ISO 8601
02-20-2016 - MM-DD-YYYY format
20-02-2016 - DD-MM-YYYY format
20-2-2016 - D-M-Y format
*/

#include <stdio.h>

int main(void)
{
    int day = 20;
    int month = 2;
    int year = 2016;
    
    printf("%04d-%02d-%02d - YYYY-MM-DD format - ISO 8601\n", year, month, day);
    printf("%02d-%02d-%04d - MM-DD-YYYY format\n", month, day, year);
    printf("%02d-%02d-%04d - DD-MM-YYYY format\n",day, month, year);
    printf("%d-%d-%d - D-M-Y format\n",day, month, year);

    return 0;
}

/* Actual output (Copied from console window)

2016-02-20 - YYYY-MM-DD format - ISO 8601
02-20-2016 - MM-DD-YYYY format
20-02-2016 - DD-MM-YYYY format
20-2-2016 - D-M-Y format
*/