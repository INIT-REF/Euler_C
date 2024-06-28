#include <stdio.h>

int main(void) {
    long long int n = 600851475143, d;

    for (d = 3; d * d < n; d += 2) {
        while (!(n % d)) {
            n /= d;
        }
    }    
    
    printf("%lld\n", d > n ? d : n);

    return 0;
}
