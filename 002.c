// Solution to Project Euler Problem 002

#include <stdio.h>

int main() {
    int sum = 0, fib1 = 1, fib2 = 2;

    while (fib2 < 4e6) {
        sum += fib2 * (1 - fib2 % 2);
        fib2 = fib1 + fib2;
        fib1 = fib2 - fib1;
    }

    printf("%d\n", sum);

    return 0;
}
