/*
Goal
You will be given a starting number start and a closing number end. You must find the number of numbers in between start and end (both inclusive) that apply to the following condition:
⇨ The sum of its digits should be greater than or equal to the product of its digits.

For Example: If start = 50 and end = 60, there are three numbers that apply to the condition.
They are 50 ( product = 0, sum = 5 ), 51 ( product = 5, sum = 6 ) and 60 ( product = 0, sum = 6 )

Input
Line1: [start] and [end]

Output
Line 1: No. of magic numbers

Constraints
10 < start < end < 5000
Example
Input
20 30

Output
4
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
    int start;
    int end;
    scanf("%d%d", &start, &end);
    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");
    int count = 0;
    for (int i = start; i <= end; i++){
        int  temp = i;
        int Sum = 0;
        int Mul = 1;
        while (temp != 0){
            Sum += temp%10;
            Mul = Mul*(temp%10);
            temp = temp/10;
            
        }
        
        if (Mul <= Sum){
            count++;
        }
    }
    printf("%d\n", count);

    return 0;
}