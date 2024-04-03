// Solution to Project Euler Problem 014

#include <stdio.h>

int main(void) {
    int cache[1000000] = {0};
    int l, max = 0, maxl = 0;
    long long int tmp;

    for (int i = 2; i < 1000000; i++) {
        tmp = i;
        l = 0;

        while (tmp != 1) {
            if (tmp % 2 == 0)
                tmp /= 2;
            else
                tmp = 3 * tmp + 1;
            
            l++;

            if (tmp < 1000000 && cache[tmp] > 0) {
                l += cache[tmp];
                break;
            }
        }

        cache[i] = l;

        if (l > maxl) {
            maxl = l;
            max = i;
        }
    }

    printf("%d\n", max);

    return 0;
}
