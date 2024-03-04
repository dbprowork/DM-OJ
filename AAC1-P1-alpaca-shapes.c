/*
Today, Sam is learning all about circles and squares at school! Unfortunately, Sam is an alpaca and 
doesn't have a very good sense of size. As his best friend, you have been tasked with helping him 
determine the larger shape (it is guaranteed that one is larger than the other).

Note: The area of a square is defined as S 2 and the area of a circle is defined as 3.14 × R 2.

The first line will contain space-separated integers S and R , denoting the side length of the square 
and the radius of the circle respectively.

Output SQUARE if the area of the square is larger, and CIRCLE otherwise.
*/

#include <stdio.h>

int main(void) {
    int squareLength, circleRadius;
    float squareArea, circleArea;

    scanf("%d %d", &squareLength, &circleRadius);

    squareArea = squareLength *= squareLength;
    circleArea = 3.14 * (circleRadius *= circleRadius);

    if (squareArea > circleArea)
        printf("SQUARE");
    else
        printf("CIRCLE");

    return 0;
}
