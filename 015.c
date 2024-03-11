// Solution to Project Euler Problem 015

#include <stdio.h>

int main() {
    long long int p = 1;

    for (int i = 1; i <= 20; i++)
        p = p * (20 + i) / i;

    printf("%lld\n", p);


    return 0;
}
