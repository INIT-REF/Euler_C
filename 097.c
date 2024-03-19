// Solution to Project Euler Problem 016

#include <stdio.h>
#include <time.h>

int main() {
    long long int n = 2;
    clock_t tic, toc;

    tic = clock();

    for (int i = 1; i < 7830457; i++) {
        n *= 2;
        n %= 10000000000;
    }
    toc = clock();

    printf("%lld\n", 1 + n * 28433 % 10000000000);
    printf("%f\n", (double)(toc-tic)/CLOCKS_PER_SEC);
  
    return 0;
}
