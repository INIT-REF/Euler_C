#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int main(void) {
    int k, sum;
    int sums[1500001] = {0};

    for (int m = 2; m*m < 1500000; m++) {
        for (int n = 1; n < m; n++) {
            if ((m + n) % 2 == 0 || gcd(m, n) > 1)
                continue;

            k = 1;
            sum = (m * m - n * n) + (2 * m * n) + (m * m + n * n);

            while (k * sum <= 1500000) {
                sums[k * sum]++;
                k++;
            }
        }
    }

    sum = 0;
    
    for (int i = 0; i < 1500001; i++) {
        if (sums[i] == 1)
        sum++;
    }

    printf("%d\n", sum);
                
    return 0;
}
