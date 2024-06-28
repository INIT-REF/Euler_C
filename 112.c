#include <stdio.h>

int isbouncy(int n) {
    int m = n, d1, d2, f1, f2, res = 0;

    d1 = m % 10;
    m /= 10;

    d2 = m % 10;
    f1 = d1 <= d2;
    f2 = d1 >= d2;

    while (m >= 10) {
        d1 = m % 10;
        m /= 10;

        d2 = m % 10;

        if ((f1 != (d1 <= d2)) && (f2 != (d1 >= d2))) {
            return 1;
        }
    }

    return 0;
}

int main(void) {
    int i = 1;
    double r = 0;
    long long int sum = 0;

    while (r < 0.900000) {
        i++;
        sum += isbouncy(i);
        r = (long double)sum / i;
    }

    printf("%d\n", i);

    return 0;
}
