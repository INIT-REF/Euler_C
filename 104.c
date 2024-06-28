// Solution to Project Euler Problem 025

#include <stdio.h>

int isPandigital(int* f) {
    int n[10] = {0};

    for (int i = 1; i < 10; i++) {
        n[f[i-1]]++;

        if (n[f[i-1]] > 1 || f[i-1] == 0)
            return 0;
    }
    return 1;
}

int main(void) {
    int fib1[2000] = {0};
    int fib2[2000] = {0};
    int carry, tmp, index = 2, firstsig = 998;

    fib1[1999] = fib2[1999] = 1;


    while (1) {
        carry = 0;
        firstsig = 0;
        for (int i = 1999; i > 0; i--) {
            fib2[i] += fib1[i] + carry;
            carry = fib2[i] / 10;
            fib2[i] %= 10;
            tmp = fib2[i];
            fib2[i] = fib1[i];
            fib1[i] = tmp;
        }

        index++;
        
        while (fib1[firstsig] == 0) {
            firstsig++;
        }

        if(isPandigital(&fib1[firstsig]) && isPandigital(&fib1[1991]))
                break;
    }

    printf("%d\n", index);

    return 0;
}
