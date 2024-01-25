/*

DMOPC '14 Contest 5 P1 - Core Drill

Simon got a new drill recently. Everyone knows that a drill is shaped like a right circular cone. Simon knows his drill has radius r and height h . But now he wants to calculate the volume. Write a program to help Simon!
Input Specification

The first line of input will have an integer r ( 1 ≤ r ≤ 100 ) .

The second line of input will have an integer h ( 1 ≤ h ≤ 100 ) .
Output Specification

The first line of output should have the volume of Simon's drill. The output will be accepted if it's within an absolute or relative error of 10 ^ −2 .

*/

#include <stdio.h>
#include <math.h> // gcc requires -lm

int main(void) {
    double pi = 3.14159265359;
    double v, mul;
    int r, h, exp;


    scanf("%d", &r);
    scanf("%d", &h);

    exp = pow(r, 2);
    mul = pi * exp * h;

    v = mul / 3;

    printf("%lf\n", v);

    return 0;
}
