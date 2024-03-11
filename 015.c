// Solution to Project Euler Problem 015
//
// The general solution for this problem is to calculate "n choose k"
// with k being the width of the square grid and n being 2 * k. We can
// then use the multiplicative formula, simplified for the specific
// problem.

#include <stdio.h>

int main() {
    long long int p = 1;

    for (int i = 1; i <= 20; i++)
        p = p * (20 + i) / i;

    printf("%lld\n", p);


    return 0;
}
