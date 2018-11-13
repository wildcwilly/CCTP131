/* 5.3.8.1  Not only vectors: chessboard
Chris Wild

Write a program that creates a chessboard, sets all the pieces on it and then displays the contents of the board. Create a two-dimensional
array, fill it with data and print a letter when a piece is on the field and a space when there is no piece. Store one letter for one piece. For
now, we don't need any information about the color of the pieces. The starting positions (with letters which symbolize each piece) for all
pieces are:
The rooks (R) are placed on the outside corners, right and left edge (white on the 1st and black on the 8th line).
The knights (N) are placed immediately inside of the rooks.
The bishops (B) are placed immediately inside of the knights.
The queen (Q) is placed on the central square of the same color as that of the player: white queen on the white square and black
queen on the black square. Both stand on the d rank: white queen on the d1 field and black queen on the d8 field.
The king (K) takes the vacant spot next to the queen.
The pawns (P - not the official symbol, but you need to print something) are placed one square in front of all of the other pieces.
Your version of the program must print the same result as the expected output.

#include <stdio.h>

int main()
{
    *** your code ***
    
    return 0;
}

Example output

RNBQKBNR
PPPPPPPP




PPPPPPPP
RNBQKBNR

*/

#include <stdio.h>

int main(void)
{
    char chessboard[8][8];
    int row, col;
    
    /* fill array with data
       row 1 and row 8 are RNBQKBNR
       row 2 and row 7 are PPPPPPPP
       all other rows are spaces */
    for(row = 0; row < 8; row++)   /* loop through rows */
    {
        if(row == 0 || row == 7)    /* rows 1 & 8 (0 reference) are various pieces */
        {
            for(col = 0; col < 8; col++)
            {
                switch(col)
                {
                    case(0):    /* col 1 and col 8 is Rook */
                    case(7):
                        chessboard[row][col] = 'R';
                        break;
                    case(1):    /* col 2 and col 7 is Knight */
                    case(6):
                        chessboard[row][col] = 'N';
                        break;
                    case(2):    /* col 3 and col 6 is Bishop */
                    case(5):
                        chessboard[row][col] = 'B';
                        break;
                    case(3):    /* col 4 is Queen */
                        chessboard[row][col] = 'Q';
                        break;
                    case(4):    /* col 5 is King */
                        chessboard[row][col] = 'K';
                }
            }
            //chessboard[row] = "RNBQKBNR";   /* set pieces for entire row */
        }
        else    /* row 1 through 7 (0 reference) are all same piece across row */
        {
            for(col = 0; col < 8; col++)    /* loop through columns each row is same piece */
            {
                if(row == 1 || row == 6)
                {
                    chessboard[row][col] = 'P'; /* rows 2 and 7 are all Pawns across */
                }
                else
                {
                    chessboard[row][col] = ' '; /* rows 3 through six are all spaces */
                }
            }
        }
    }
    
    /* print chessboard to screen */
    for(row = 0; row < 8; row++)    /* loop through rows */
    {
        for(col = 0; col < 8; col++)    /* loop through columns */
        {
            printf("%c", chessboard[row][col]); /* print piece at location */
        }
        
        printf("\n");   /* add new line after each row */
    }
    
    return 0;
}

/* Actual output (copied from console window)

RNBQKBNR
PPPPPPPP
        
        
        
        
PPPPPPPP
RNBQKBNR
*/