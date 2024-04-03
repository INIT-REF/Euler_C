// Solution to Project Euler Problem 028

#include <stdio.h>

int main(void) {
    int sum = 1, n = 1, size = 1001;

    for (int i = 4; i < 2 * size + 2; i++) {
        n += 2 * (i / 4);
        sum += n;
    } 

    printf("%d\n", sum);

    return 0;
}
