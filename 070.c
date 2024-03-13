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

int isPermutation(int a, int b) {
    int aDigits[10] = {0};
    int bDigits[10] = {0};

    while (a) {
        aDigits[a % 10]++;
        a /= 10;
    }

    while (b) {
        bDigits[b % 10]++;
        b /= 10;
    }

    for (int i = 0; i < 10; i++) {
        if (aDigits[i] != bDigits[i])
            return 0;
    }

    return 1;
}

int main() {
    double r, minr = 2;
    int minn;
    
    for (int n = 2; n < 10000000; n++) {
        if (isPermutation(n, phi(n))) {
            r = n / (double)phi(n);
            if (r < minr) {
                minr = r;
                minn = n;
            }
        }
    }

    printf("%d\n", minn);

    return 0;
}
