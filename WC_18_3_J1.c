/*

WC '18 Contest 3 J1 - An Honest Day's Work

Woburn Challenge 2018-19 Round 3 - Junior Division

Jessie, James, and Meowth, members of the honourable Team Rocket, have unfortunately fallen on hard times. With their funds necessarily allocated to constructing all manner of giant robots and other devices, they've been having difficulty affording any food lately. But that's nothing that an honest day's work can't fix!

James has a can of leftover paint, containing P ( 1 ≤ P ≤ 100 ) litres of the stuff. When combined with his boundless collection of bottlecaps, this can result in some high-quality wares. When a bottlecap is artfully covered with B ( 1 ≤ B ≤ 100 ) litres of paint, it turns into a completely legitimate, Pokémon league-certified gym badge!

James will produce as many badges as he can using the paint, using exactly B litres each. Pokémon trainers love their gym badges, so each such badge is sure to sell for D ( 1 ≤ D ≤ 100 ) Pokédollars.

There might still be some extra paint left over, once there's not enough for another complete badge. However, there's no need for it to go to waste - James will sell any remaining paint at a rate of 1 Pokédollar per litre.

How much money will James make for Team Rocket in total, from his sales of badges and leftover paint? Hopefully it'll be enough for at least a loaf of bread!
Input Specification

The first line of input consists of a single integer, P.
The second line consists of a single integer, B.
The third line consists of a single integer, D.
Output Specification

Output a single integer, the amount of money which James will make (in Pokédollars).

*/

#include <stdio.h>
#include <math.h>

int main (void) {
    int p, b, d;
    int res;

    scanf("%d", &p);
    scanf("%d", &b);
    scanf("%d", &d);

    res = (p / b) * d + (p % b);

    printf("%d\n", res);
}
