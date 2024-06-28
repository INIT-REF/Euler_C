#include <stdio.h>

int main(void) {
    int d, j, t, p = 999999;
    int taken[10] = {0};
    int fact[10] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};

    for (int i = 9; i >= 0; i--) {
        d = p / fact[i];
        p %= fact[i];
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
