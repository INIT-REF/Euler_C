// Solution to Project Euler Problem 016
// 
// Using an array representation to avoid a BigInt library.

#include <stdio.h>

int main(void) {
    int n[302] = {0};
    int sum = 0, carry = 0;
    
    n[301] = 1;
    
    for (int i = 0; i < 1000; i++) {
        for (int j = 302; j >= 0; j--) {
            n[j] = 2 * n[j] + carry;
            carry = n[j] / 10;
            n[j] %= 10;
        }
    }

    for (int i = 0; i < 302; i++) {
        sum += n[i];
    }

    printf("%d\n", sum);

    return 0;
}
