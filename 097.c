// Solution to Project Euler Problem 016
// 
// Using an array representation to avoid a BigInt library.

#include <stdio.h>

int main() {
    int n[20] = {0};
    int sum = 0, carry;
    
    n[19] = 1;
    
    for (int i = 0; i < 7830457; i++) {
        carry = 0;
        for (int j = 19; j >= 0; j--) {
            n[j] = 2 * n[j] + carry;
            carry = n[j] / 10;
            n[j] %= 10;
        }
    }

    for (int i = 19; i >= 0; i--) {
            n[i] = 28433 * n[i] + carry;
            carry = n[i] / 10;
            n[i] %= 10;
    }

    for (int i = 10; i < 20; i++) {
        printf("%d", n[i]);
    }

    printf("\n");

    return 0;
}
