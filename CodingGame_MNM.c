/*
The game mode is REVERSE: You do not have access to the statement. You have to guess what to do by observing the following set of tests:
01 Test 1
Input
2
4

Expected output
16

02 Test 2
Input
7
11

Expected output
539

03 Test 3
Input
456
54

Expected output
11228544

04 Test 4
Input
1111
79

Expected output
97511359

05 Test 5
Input
0
6

Expected output
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
	int M;
	scanf("%d", &M);
	int N;
	scanf("%d", &N);

	// Write an answer using printf(). DON'T FORGET THE TRAILING \n
	// To debug: fprintf(stderr, "Debug messages...\n");

	printf("%d\n", M*N*M);

	return 0;
}