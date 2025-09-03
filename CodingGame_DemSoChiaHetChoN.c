/*
- Goal
We want to determine the number of divisors of n in a range from 1 to n.
The numbers 1 and n are excluded as divisors.
- Input
Line 1: An integer n
- Output
Line 1: The number of divisors of n as a result excluding the numbers 1 and n
- Constraints
1 < n < 1000000
- Example
Input
3
Output
0
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

    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");
    int count = 0;
    for (int i = 2; i < n; i++){
        if (n%i == 0){
            count++;
        }
    }
    printf("%d\n", count);

    return 0;
}