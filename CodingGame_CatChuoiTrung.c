/*
Goal
You are given a string that is already a palindrome. Your task is to write a function that reverses the process and generates the original string that, when reversed and appended to itself (overlapping one character in the middle if needed), forms the given palindrome.

Input
A single string s that is a palindrome.

Output
The original string s' as described in the statement.

Constraints
1 ≤ length of s ≤ 10

Example
Input
bob

Output
bo
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
    char s[101] = "";
    scanf("%[^\n]", s);
    int len = strlen(s);
    int count = 0;
    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");
    for (int j = len - 1; j >= 0; j--){
        for (int i = 0; i < j; i++){
            if (s[i] == s[j]){
                count++;
                break;
            }
        }
    }

    for (int i = 0; i < len - count; i++){
        printf("%c", s[i]);
    }
    

    return 0;
}