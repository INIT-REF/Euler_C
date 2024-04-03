// Solution to Project Euler Problem 025

#include <stdio.h>

int main(void) {
    int fib1[1000] = {0};
    int fib2[1000] = {0};
    int carry, tmp, index = 2, firstsig = 998;

    fib1[999] = fib2[999] = 1;


    while (!fib1[0]) {
        carry = 0;

        for (int i = 999; i >= firstsig; i--) {
            fib2[i] += fib1[i] + carry;
            carry = fib2[i] / 10;
            fib2[i] %= 10;
            tmp = fib2[i];
            fib2[i] = fib1[i];
            fib1[i] = tmp;
        }
        
        if (fib1[firstsig]) {
            firstsig--;
        }

        index++;
    }

    printf("%d\n", index);
    return 0;
}
