#include <stdio.h>

int main() {
    long long int n_2 = 11, n_1 = 19, n, offset = 4, limit = 100;

    for (int i = 7; i < limit + 2; i++) {
        n = n_2 + n_1 * offset;
        n_2 = n_1;
        n_1 = n;

        switch (i % 3) {
            case 0 : offset = 2 * i / 3; break;
            default : offset = 1; break;
        }
    }

    printf("%lld\n", n);
    
    return 0;
}
