/* 4.2.11.2 Arrays: part 2
Chris Wild

Write a program that fills a 26-element array with letters from "a" to "z". Try not to use the int type, but only the char type for variables.
When the array is filled, the program should print all the characters in reverse order, then print only the array elements that constitute the
word "great". Figure out the simplest way to find out which elements should be used. Your version of the program must print the same
result as the expected output.

#include <stdio.h>

int main()
{
    *** your code ***
    
    return 0;
}


Example output

z
y
x
w
v
u
t
s
r
q
p
o
n
m
l
k
j
i
h
g
f
e
d
c
b
great
*/

#include <stdio.h>

int main(void)  
{
    char letters[26], letter;
    
    /* populate letters array in reverse order and print letter */
    for(letter = 'z'; letter >= 'a'; letter--)
    {
        letters[letter - 'a'] = letter; /* letter - 'a' should start at index 0 ('a' - 'a') */
        printf("%c\n", letters[letter - 'a']);
    }
    
    /* print word great using array index only */
    printf("%c%c%c%c%c\n", letters[6], letters[17], letters[4], letters[0], letters[19]);

    return 0;
}

/* Actual output (copied from console window)
z
y
x
w
v
u
t
s
r
q
p
o
n
m
l
k
j
i
h
g
f
e
d
c
b
a
great
*/