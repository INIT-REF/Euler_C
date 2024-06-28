#include <stdio.h>

int main(void) {
    long long int fib1[100] = {0};
    long long int fib2[100] = {0};
    long long int carry, tmp, d = 1e10;
    int index = 2;

    fib1[99] = fib2[99] = 1;


    while (fib1[0] < 1e9) {
        carry = 0;

        for (int i = 99; i >= 0; i--) {
            fib2[i] += fib1[i] + carry;
            carry = fib2[i] / d;
            fib2[i] %= d;
            tmp = fib2[i];
            fib2[i] = fib1[i];
            fib1[i] = tmp;
        }

        index++;
    }

    printf("%d\n", index);

    return 0;
}
