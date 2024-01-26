/*

CCC '19 J1 - Winning Score

Canadian Computing Competition: 2019 Stage 1, Junior #1

You record all of the scoring activity at a basketball game. Points are scored by a 3 -point shot, a 2 -point field goal, or a 1 -point free throw.

You know the number of each of these types of scoring for the two teams: the Apples and the Bananas. Your job is to determine which team won, or if the game ended in a tie.
Input Specification

The first three lines of input describe the scoring of the Apples, and the next three lines of input describe the scoring of the Bananas. For each team, the first line contains the number of successful 3 -point shots, the second line contains the number of successful 2 -point field goals, and the third line contains the number of successful 1 -point free throws. Each number will be an integer between 0 and 100 , inclusive.
Output Specification

The output will be a single character. If the Apples scored more points than the Bananas, output A. If the Bananas scored more points than the Apples, output B. Otherwise, output T, to indicate a tie.

*/

#include <stdio.h>

int main(void) {
    int athrees, atwos, aones;
    int bthrees, btwos, bones;
    int asum, bsum;

    scanf("%d", &athrees);
    scanf("%d", &atwos);
    scanf("%d", &aones);
    scanf("%d", &bthrees);
    scanf("%d", &btwos);
    scanf("%d", &bones);

    athrees *= 3;
    atwos *= 2;

    asum = athrees + atwos + aones;

    bthrees *= 3;
    btwos *= 2;

    bsum = bthrees + btwos + bones;

    if (asum > bsum) {
        printf("A\n");
    }

    else if (bsum > asum) {
        printf("B\n");
    }

    else {
        printf("T\n");
    }

    return 0;

}
