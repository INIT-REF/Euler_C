// Solution to Project Euler Problem 024
//
// Using the "Lehmer Code" to compute the permutation


#include <stdio.h>

int fact(int n) {
    int f = 1;

    for (int i = 2; i <= n; i++) {
        f *= i;
    }

    return f;
}

int main(void) {
    int d, j, t, p = 999999;
    int taken[10] = {0};

    for (int i = 9; i >= 0; i--) {
        d = p / fact(i);
        p %= fact(i);
        t = 0;
        j = 0;

        while (t != d || taken[j]) {
            t += !taken[j];
            j++;
        }

        taken[j] = 1;
        printf("%d", j);
    }
    
    printf("\n");

    return 0;
}
