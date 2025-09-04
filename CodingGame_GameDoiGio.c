/*
The game mode is REVERSE: You do not have access to the statement. You have to guess what to do by observing the following set of tests:

01 Test 1
Input
mon
1
2
3

Expected output
mon 01:02:03

02 Test 2
Input
tue
16
58
70

Expected output
tue 16:59:10

03 Test 3
Input
wed
23
60
23

Expected output
thu 00:00:23

04 Test 4
Input
sun
22
118
120

Expected output
mon 00:00:00
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
    char day[4] = "";
    scanf("%s", day);
    int hours;
    scanf("%d", &hours);
    int minutes;
    scanf("%d", &minutes);
    int seconds;
    scanf("%d", &seconds);

    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");
    bool Flag_x = false;
    while (seconds >= 60){
        seconds = seconds - 60;
        minutes++;
    }

    while (minutes >= 60){
        minutes = minutes - 60;
        hours++;
    }

    while (hours >= 24){
        hours = hours - 24;
        Flag_x = true;
    }
    if (Flag_x){
        if (day[0] == 's'){
            printf("mon");
        } else {
            printf("thu");
        }
    }else {
        for (int i =0; i <= 2; i++){
            printf("%c", day[i]);
        }
    }
    printf(" %d%d:", hours/10, hours%10);
    printf("%d%d:", minutes/10, minutes%10);
    printf("%d%d", seconds/10, seconds%10);
    return 0;
}