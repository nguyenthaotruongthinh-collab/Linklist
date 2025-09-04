/*
The game mode is REVERSE: You do not have access to the statement. You have to guess what to do by observing the following set of tests:

01 Test 1
Input
Hello world!

Expected output
****************
* Hello world! *
****************

02 Test 2
Input
Can you do it?

Expected output
******************
* Can you do it? *
******************

03 Test 3
Input
CodinGame is cool!

Expected output
**********************
* CodinGame is cool! *
**********************

04 Test 4
Input
1234567890

Expected output
**************
* 1234567890 *
**************
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
    char A[65] = "";
    scanf("%[^\n]", A);
    int len = strlen(A) + 4;
    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < len; j++){
            if (i == 0 || i == 2 || j == 0 || j == len - 1){
                printf("*");
            } else if (j == 1 || j == len - 2){
                printf(" ");
            } else {
                printf("%c", A[j - 2]);
            }
        }
        printf("\n");
    }

    return 0;
}