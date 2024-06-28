#include <stdio.h>

int main(void) {
    int squaresum = 0, sum = 0;

    for (int i = 1; i <= 100; i++) {
        squaresum += i * i;
        sum += i;
    }

    printf("%d\n", sum * sum - squaresum);

    return 0;
}
