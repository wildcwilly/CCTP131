/* 7.3.8.2 File operations: part 2
Chris Wild

Write a program that counts the metrics of a file:
Number of all characters
Number of whitespaces
Number of lines
Number of all lower-case letters
You can (for now, to simplify your task, of course) assume constant file names. To speed up your programming, you can test your
program on its source code. First, open a file in read mode. After that, character by character, read the file and count the numbers
asked. Remember to close the file.
Note: in a real program, it's important to check whether all the files needed actually exist and that you can read their contents. In our
program, you should at least check that the files have been successfully opened. If the fopen function fails, then print the message
"Error opening file." and end the program. There's only one instance of output from your program - your output can vary, depending on
the file contents.

#include <stdio.h>

int main()
{
    *** your code ***

    return 0;
}

Example output

Lines: 34
Whitespaces: 153
Characters: 686
Small letter: a : 23
Small letter: b : 1
Small letter: c : 25
Small letter: d : 7
Small letter: e : 27
Small letter: f : 13
Small letter: g : 1
Small letter: h : 12
Small letter: i : 32
Small letter: j : 0
Small letter: k : 1
Small letter: l : 14
Small letter: m : 6
Small letter: n : 36
Small letter: o : 16
Small letter: p : 9
Small letter: q : 0
Small letter: r : 20
Small letter: s : 23
Small letter: t : 39
Small letter: u : 14
Small letter: v : 0
Small letter: w : 4
Small letter: x : 0
Small letter: y : 0
Small letter: z : 3
*/

#include <stdio.h>

int main()
{
    FILE *srcFile;
    int loop, characters = 0, whitespace = 0, lines = 0, lowerLetters[26] = { 0 }; /* initialize all counter variables to 0 */
    char character;

    /* open source file (this file. Executable is up 1 directory level on this machine) */
    if((srcFile = fopen("Chapter 7/7_3_8_2.c", "rt")) == NULL)
    {
        puts("Error opening file.");
        return 1;
    }

    /* read file 1 character at a time */
    while((character = fgetc(srcFile)) != EOF)
    {
        characters++;   /* increase number of characters by 1 */

        if(character == '\n')   /* new lines */
            lines++;

        if(character == ' ')    /* whitespaces */
            whitespace++;

        if(character >= 'a' && character <='z') /* lower case characters */
        {
            lowerLetters[character - 'a']++;    /* character - 'a' will give index from 0 */
        }
    }

    lines++;    /* no newline at end of file (count as a line) */

    /* print the results of parsing the file */
    printf("Lines: %d\n", lines);
    printf("Whitespaces: %d\n", whitespace);
    printf("Characters: %d\n", characters);
    
    for(loop = 0; loop < 26; loop++)
    {
        printf("Small letter: %c : %d\n", ('a' + loop), lowerLetters[loop]);
    }

    /* close open files */
    fclose(srcFile);

    return 0;
}

/* Actual output (copied from console window)

Lines: 140
Whitespaces: 743
Characters: 3725
Small letter: a : 175
Small letter: b : 14
Small letter: c : 95
Small letter: d : 35
Small letter: e : 301
Small letter: f : 51
Small letter: g : 17
Small letter: h : 64
Small letter: i : 102
Small letter: j : 2
Small letter: k : 6
Small letter: l : 238
Small letter: m : 86
Small letter: n : 97
Small letter: o : 107
Small letter: p : 54
Small letter: q : 2
Small letter: r : 189
Small letter: s : 95
Small letter: t : 237
Small letter: u : 51
Small letter: v : 7
Small letter: w : 20
Small letter: x : 6
Small letter: y : 19
Small letter: z : 4
*/