#include <stdio.h>
#include <stdlib.h>



int phi(int n) {
    int ph = n;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0) {
                n /= i;
            }
            ph -= ph / i;
        }
    }

    if (n > 1)
        ph -= ph / n;
    return ph;
}

int main(void) {
    double t, maxt = 0;
    int maxn;

    for (int n = 2; n < 1000000; n++) {
        t = n / (double)phi(n);

        if (t > maxt) {
            maxt = t;
            maxn = n;
        }
    }

    printf("%d\n", maxn);

    return 0;
}
