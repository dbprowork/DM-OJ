/*
CCC '07 J1 - Who is in the Middle?

Canadian Computing Competition: 2007 Stage 1, Junior #1

In the story Goldilocks and the Three Bears, each bear had a bowl of porridge to eat while sitting at his/her favourite chair. What the story didn't tell us is that Goldilocks moved the bowls around on the table, so the bowls were not at the right seats anymore. The bowls can be sorted by weight with the lightest bowl being the Baby Bear's bowl, the medium bowl being the Mama Bear's bowl and the heaviest bowl being the Papa Bear's bowl.

Write a program that reads in three weights and prints out the weight of Mama Bear's bowl. You may assume all weights are positive integers less than 100 .
*/

#include <stdio.h>

int main(void) {
    int x, y, z, mid = 0, high = 0;

    scanf("%d", &x);
    scanf("%d", &y);
    
    if (x > y) {
        mid = y;
        high = x;
    }

    else if (x < y) {
        mid = x;
        high = y;
    }

    scanf("%d", &z);

    if (z > high){
        mid = high;
        high = z;
    }

    else if (z < high && z > mid) {
        mid = z;
    }

    printf("%d\n", mid);

    return 0;
}
