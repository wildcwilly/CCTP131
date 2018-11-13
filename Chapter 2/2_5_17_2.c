/* 2.5.17.2 Lab
Chris Wild

You have the data (included in code) of three students grades (StudentA, StudentB, StudentC). Write a program to print this data in rows
- the first row is a header in the format "Student name: 1stYGrade 2ndYGrade 3rdYGrade Avg". The next three rows contain: student
name (StudentA, StudentB, StudentC is enough), 1stYGrade 2ndYGrade 3rdYGrade, and the average of these three grades. Your version
of the program must print the same result as the expected output. To print only two digits of a floating-point number, use the "%.2f"
format specifier, and to fill it with spaces you can use the "%9.2f" format specifier where 9 is the length of the number and spaces.

#include <stdio.h>

int main()
{
    float studentAYear1 = 4.2;
    float studentAYear2 = 4.5;
    float studentAYear3 = 4.2;
    float studentBYear1 = 4.3;
    float studentBYear2 = 4.4;
    float studentBYear3 = 4.7;
    float studentCYear1 = 4.3;
    float studentCYear2 = 4.8;
    float studentCYear3 = 4.9;
    *** your code ***

    return 0;
}

Example output

Student name:   1stYGrade   2ndYGrade   3rdYGrade   Avg
Student A            4.20        4.50        4.20  4.30
Student B            4.30        4.40        4.70  4.47
Student C            4.30        4.80        4.90  4.67
*/

#include <stdio.h>

int main(int)
{
    float studentAYear1 = 4.2;
    float studentAYear2 = 4.5;
    float studentAYear3 = 4.2;
    float studentBYear1 = 4.3;
    float studentBYear2 = 4.4;
    float studentBYear3 = 4.7;
    float studentCYear1 = 4.3;
    float studentCYear2 = 4.8;
    float studentCYear3 = 4.9;
    
    /* print header */
    printf("Student name: 1stYGrade 2ndYGrade 3rdYGrade   Avg\n");
    
    /* print student grades (formated) and calculated average */
    printf("Student A     %9.2f %9.2f %9.2f %5.2f\n", studentAYear1, studentAYear2, studentAYear3, (studentAYear1 + studentAYear2 + studentAYear3) / 3);
    printf("Student B     %9.2f %9.2f %9.2f %5.2f\n", studentBYear1, studentBYear2, studentBYear3, (studentBYear1 + studentBYear2 + studentBYear3) / 3);
    printf("Student C     %9.2f %9.2f %9.2f %5.2f\n", studentCYear1, studentCYear2, studentCYear3, (studentCYear1 + studentCYear2 + studentCYear3) / 3);

    return 0;
}

/* Actual output (Copied from console window)

Student name: 1stYGrade 2ndYGrade 3rdYGrade   Avg
Student A          4.20      4.50      4.20  4.30
Student B          4.30      4.40      4.70  4.47
Student C          4.30      4.80      4.90  4.67
*/