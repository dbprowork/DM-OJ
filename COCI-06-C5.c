/*

COCI '06 Contest 5 #1 Trik

Jealous of Mirko's position as head of the village, Borko stormed into his tent and tried to demonstrate Mirko's incompetence for leadership with a trick.

Borko puts three opaque cups onto the table next to each other (opening facing down) and a small ball under the leftmost cup. He then swaps two cups in one of three possible ways a number of times. Mirko has to tell which cup the ball ends up under.

Wise Mirko grins with his arms crossed while Borko struggles to move the cups faster and faster. What Borko does not know is that programmers in the back are recording all his moves and will use a simple program to determine where the ball is. Write that program.
Input Specification

The first and only line contains a string of at most 50 characters, Borko's moves.

Each of the characters is A, B or C.
Output Specification

Output the index of the cup under which the ball is: 1 if it is under the left cup, 2 if it is under the middle cup or 3 if it is under the right cup.

*/

#include <stdio.h>

int main(void) {
    int i;
    char sequence[50]; // Array is pointer-like object, does not require & for scanf
    int ball = 1;

    scanf("%s", sequence);

    for (i = 0; sequence[i] != 0; i++) {
        if (sequence[i] == 'A') {
            if (ball == 1) {
                ball = 2;
            }
            else if (ball == 2) {
                ball = 1;
            }
            else {
                continue;
            }
        }
        if (sequence[i] == 'B') {
            if (ball == 2) {
                ball = 3;
            }
            else if (ball == 3) {
                ball = 2;
            }
            else {
                continue;
            }
        }
        if (sequence[i] == 'C') {
            if (ball == 3) {
                ball = 1;
            }
            else if (ball == 1) {
                ball = 3;
            }
            else {
                continue;
            }
        }
    }
    printf("%d\n", ball);
    return 0;
}
