#include <stdio.h>

int main(void) {
    long long int p, count = 0;

    for (long long int n = 1; n <= 100; n++) {
        for (long long int k = 1; k <= n; k++) {
            p = 1;
            for (long long int i = 1; i <= k; i++) {
                p *= (n + 1 - i);
                p /= i;
                if (p > 1e6) {
                    count++;
                    break;
                }
            }
        }
    }

    printf("%lld\n", count);

    return 0;
}
