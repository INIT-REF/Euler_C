#include <stdio.h>

int main(void) {
    int fib1 = 1, fib2 = 2; sum = 0;

    for (; fib2 < 4e6; fib2 += fib1) {
        sum += fib2 * !(fib2 & 1);
        fib1 = fib2 - fib1;
    }        

    printf("%d\n", sum);

    return 0;
}
