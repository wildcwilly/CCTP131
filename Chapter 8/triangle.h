#ifndef __TRIANGLE_H__
#define __TRIANGLE_H__

/* classicTriangle.h
Chris Wild

Builds a classical triangle of 'size' out of '\'

\
\\
\\\
\\\\
*/

extern void classicTriangle(int size);

/* Builds a Floyd's triangle of 'size' out of numbers

1
2 3
4 5 6
7 8 9 10
*/

extern void floydTriangle(int size);
#endif