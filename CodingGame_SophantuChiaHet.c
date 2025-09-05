/*
Goal
Given an integer n, print the count of digits in n that evenly divide n, without leaving a remainder.

For example, when n is 234, the answer is 2 because 234 is divisible by 2 and 3 but not divisible by 4.

Input
Line 1: Integer n

Output
Line 1: Integer c, (count of digits)

Constraints
1 < n < 10^9

Example
Input
5

Output
1
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
    int n;
    scanf("%d", &n);
    int temp = n;
    int count = 0;
    while (temp != 0){
        if (temp%10 == 0){

        }else if (n%(temp%10) == 0){
            count++;
        }
        temp = temp/10;
    }
    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");

    printf("%d\n", count);

    return 0;
}