/* 7.3.8.1 File operations: part 1
Chris Wild

Write a program that copies itself and adds line numbers to each line. You can (for now, to simplify your task, of course) assume
constant file names. First, open the file in read mode, then open the copy file in write mode. After that, line by line, get the lines from the
source file, append the number of the line to the destination file, and append the line content. Remember to close both files. Note: in a
real program, it's important to check whether all the needed files exist and that you can create a copy. In our program, you should at
least check that both files have been successfully opened. If one of the fopen functions fails, then print the message: "Error opening a
file." and end the program.

#include <stdio.h>

int main()
{
    *** your code ***

    return 0;
}

Example output

Copy of source file with line numbers.
*/

#include <stdio.h>

int main()
{
    FILE *srcFile, *destFile; /* pointers for source and destination files */
    char textLine[200]; /* line of text from srcFile (current longest line is 144 characters */
    int line = 1;   /* start of line numbers for destination file */

    /* open this file to be read. Executable file is created in project root on my Linux setup (up 1 folder) */
    if((srcFile = fopen("Chapter 7/7_3_8_1.c", "rt")) == NULL)
    {
        puts("Can't open source file 7_3_8_1.c");
        return 1;
    }

    /* open destination file (this filename with .copy) in write mode (if file exists it will be overwritten) */
    if((destFile = fopen("Chapter 7/7_3_8_1.copy", "wt")) == NULL)
    {
        puts("Can't open destination file 7_3_8_1.copy");
        return 1;
    }

    /* read line from source file */
    while(fgets(textLine, sizeof(textLine), srcFile) != NULL)
    {
        /* write line to destination file with formated line number in front */
        fprintf(destFile, "%3d %s", line++, textLine);
    }

    /* close source and destination files */
    fclose(srcFile);
    fclose(destFile);

    return 0;
}

/* Actual output will be in 7_3_8_1.copy file */