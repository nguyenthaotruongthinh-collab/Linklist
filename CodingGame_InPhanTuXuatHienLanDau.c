/*
The program:
Your program must read a list of integers from the standard input and remove the duplicates, the resulting list must only contain the first occurrences of each integer and should be written to the standard output.

INPUT:
Line 1: an integer N for the number of integers in the list.
N next lines: an integer X of the list.

OUTPUT:
The list of integers without duplicates, sorted in order of appearance.

CONSTRAINTS:
0 < N < 1000
-1000 < X < 1000

EXAMPLE:
Input
7
1
1
3
1
3
2
3
Output
1
3
2
 

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
    int N;
    int A[12];
    int count = 1;
    int B[12];
    bool Flag_Same = false;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        int X;
        scanf("%d", &X);
        A[i] = X;
    }

    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");
    printf("%d\n", A[0]);
    B[0] = A[0];
    for (int i = 1; i < N; i++){
        for (int j = 0; j < count; j++){
            if (B[j] == A[i]){
                Flag_Same = true;
                break;
            }
        }
        if (Flag_Same == false){
            B[count] = A[i];
            count++;
            printf("%d\n", A[i]);
        } else {
            Flag_Same = false;
        }
    }

    return 0;
}