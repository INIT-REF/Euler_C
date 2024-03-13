#include <stdio.h>

int main() {
    int b = 4000, d = 3, n = 12000, k, count = -1, tmp;

    while (d > 2) {
        count++;
        k = (n + b) / d;
        tmp = d;
        d = k * d - b;
        b = tmp;
    }

    printf("%d\n", count);

    return 0;
}
