/* 4.10.11.1    Strings: advanced operations
Chris Wild

A palindrome is a word (or other sequence of characters) that reads the same backward or forward. Write a program that takes one
word and prints its palindrome. You can use the for loop, the strlen function, and the %s format in scanf and print. You can use a new
variable or one declared earlier for holding the reversed value of a word. Declare a string big enough to hold long words. For the record,
you should use fgets instead of scanf in the future, especially when you want to have long strings with spaces. Your version of the
program must print the same result as the expected output.

#include <stdio.h>

#include <string.h>

int main()
{
    *** your code ***
    
    return 0;
}

Example input

book

Example output

koob

Example input

dictionary

Example output

yranoitcid

Example input

ailihphilia

Example output

ailihphilia
*/

#include <stdio.h>

#include <string.h>

int main(void)
{
    char word[30]; /* string to hold a word 29 chars + \n */
    char revWord[30] = { 0 };  /* string to hold reversed word, preset values to 0 */
    int loop, wordSize;

    /* prompt and input word as string */
    printf("Enter a word: ");
    scanf("%s", word);

    wordSize = strlen(word);    /* put length of word into variable */

    for(loop = 0; loop < wordSize; loop++)
    {
        /* step backwards through revWord and forward through word
           copy character in word into revWord (revWord - loop -1, -1 for reference from 0) */
        revWord[wordSize - loop - 1] = word[loop];
    }
    
    printf("%s\n", revWord);
    
    return 0;
}

/* Actual output (copied from console window)

Enter a word: book
koob

Enter a word: dictionary
yranoitcid

Enter a word: ailihphilia
ailihphilia
*/