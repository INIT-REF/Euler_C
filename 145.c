#include <stdio.h>
#include <stdlib.h>

int reverse(long long int n) {
    long long int r = 0;

    while (n) {
        r *= 10;
        r += n % 10;
        n /= 10;
    }

    return r;
}

int onlyodd(long long int n) {
    int d = 1;

    while (n) {
        d = (n % 10) % 2;
        if (d == 0) {
            return 0;
        }
        n /= 10;
    }

    return 1;
}

int main(void) {
    int* rn = malloc(1000000000 * sizeof(int));
    long long int r, sum = 0;

    for (long long int n = 11; n < 1000000000; n++) {
        if (rn[n] || n % 10 == 0) {
            continue;
        }

        r = reverse(n);

        if (onlyodd(n + r)) {
            rn[n] = 1;
            rn[r] = 1;
        }
    }

    for (int i = 11; i < 1000000000; i++) {
        sum += rn[i];
    }
    
    printf("%d\n", sum);

    return 0;
}
