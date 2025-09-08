/*
The game mode is REVERSE: You do not have access to the statement. You have to guess what to do by observing the following set of tests:

01 Test 1
Input
1 2 3

Expected output
11111
12221
12321
12221
11111

02 Test 2
Input
/ _ \

Expected output
/////
/___/
/_\_/
/___/
/////

03 Test 3
Input
d d d

Expected output
ddddd
ddddd
ddddd
ddddd
ddddd

04 Test 4
Input
q w e

Expected output
qqqqq
qwwwq
qwewq
qwwwq
qqqqq

05 Test 5
Input
@ - @

Expected output
@@@@@
@---@
@-@-@
@---@
@@@@@
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
    char chr_1[2] = "";
    char chr_2[2] = "";
    char chr_3[2] = "";
    scanf("%s%s%s", chr_1, chr_2, chr_3);

    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if (i == 0 || j == 0 || i == 4 || j == 4){
                printf("%c", chr_1[0]);
            } else if (i == 1 || j == 1 || i == 3 || j == 3){
                printf("%c", chr_2[0]);
            } else {
                printf("%c", chr_3[0]);
            }
        }
        printf("\n");
    }

    // printf("pattern\n");

    return 0;
}