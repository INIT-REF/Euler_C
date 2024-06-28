#include <stdio.h>

int main(void) {
    int sum = 0;

    for (int i = 0; i < 1000; i++)
        sum += i * !(i % 3 * i % 5);

    printf("%d\n", sum);

    return 0;
}
