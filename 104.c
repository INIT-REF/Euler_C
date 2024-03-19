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

int main() {
    int fib1[1000] = {0};
    int fib2[1000] = {0};
    int carry, tmp, index = 2, firstsig = 998;

    fib1[999] = fib2[999] = 1;


    while (1) {
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

        if (firstsig > 990)
            continue;
        else if(isPandigital(&fib1[firstsig+1]) && isPandigital(&fib1[991]))
                break;
    }

    printf("%d\n", index);

    return 0;
}
