#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int main(void) {
    int k, p, sum = 0;
    int ps[1500001] = {0};

    for (int m = 2; m*m < 750000; m++) {
        for (int n = 1; n < m; n++) {
            if ((m + n) % 2 == 0 || gcd(m, n) > 1)
                continue;

            p = (2 * m * m) + (2 * m * n);
            k = p;

            while (k <= 1500000) {
                ps[k]++;
                if (ps[k] == 1)
                    sum++;
                if (ps[k] == 2)
                    sum--;
                k += p;
            }
        }
    }

    printf("%d\n", sum);
                
    return 0;
}
