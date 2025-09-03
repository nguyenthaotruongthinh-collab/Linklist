/*
The program:
Your program must perform a binary OR on two binary numbers given through the standard input and print the result to the standard output.

OR Truth Table
Input	Output
A	B
0	0	0
0	1	1
1	0	1
1	1	1

Warning, the number in output must have the same number of digits as the given numbers.

INPUT:
2 binary numbers n1 and n2, separated by spaces.

OUTPUT:
The result of an OR between n1 and n2.

CONSTRAINTS:
n1 and n2 have the same number of digits.

EXAMPLE:
Input
001 011
Output
011
 
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    char n_1[65] = "";
    char n_2[65] = "";
    scanf("%s%s", n_1, n_2);
    int Len1 = strlen(n_1);
    
    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");
    for (int i = 0; i < Len1; i++){
        if (n_1[i] == '1' || n_2[i] == '1'){
            printf("1");
        } else {
            printf("0");
        }
    }
    

    return 0;
}