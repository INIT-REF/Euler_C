#include <stdio.h>

int main() {
    long long int n = 1;
    
    for (long long int i = 0; i < 7830457; i++) {
        n *= 2;
        n %= 10000000000;
    }

    n = n * 7 % 10000000000;
    n = n * 151 % 10000000000;
    n = n * 269 % 10000000000;
    n++;

    printf("%d\n", n);

    return 0;
}
