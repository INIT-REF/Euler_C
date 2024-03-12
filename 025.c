// Solution to Project Euler Problem 025

#include <stdio.h>

int main() {
    int fib1[1000] = {0};
    int fib2[1000] = {0};
    int carry, tmp, index = 1;

    fib1[999] = fib2[999] = 1;


    while (fib2[0] == 0) {
        carry = 0;

        for (int i = 999; i >= 0; i--) {
            fib2[i] += fib1[i] + carry;
            carry = fib2[i] / 10;
            fib2[i] %= 10;
            tmp = fib2[i];
            fib2[i] = fib1[i];
            fib1[i] = tmp;
        }

        index++;
    }

    printf("%d\n", index);
    return 0;
}
