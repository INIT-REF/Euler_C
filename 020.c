// Solution to Project Euler Problem 020
//
// Using an array representation to avoid a BigInt library.  

#include <stdio.h>

int main(void) {
    int n[158] = {0};
    int sum = 0, carry = 0;

    n[157] = 1;

    for (int i = 2; i <= 100; i++) {
        for (int j = 157; j >= 0; j--) {
            n[j] = carry + n[j] * i;
            carry = n[j] / 10;
            n[j] %= 10;
        }
    }

    for (int i = 0; i < 158; i++) {
        sum += n[i];
    }

    printf("%d\n", sum);

    return 0;
}
