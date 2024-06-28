#include <stdio.h>

int main(void) {
    int a, l, maxl = 0, maxd;

    for (int d = 3; d < 1000; d += 2) {
        if (d % 5 == 0) {
            continue;
        }

        a = 10 % d;
        l = 1;

        while (a > 1) {
            l++;
            a = (a * 10) % d;
        }

        if (l > maxl) {
            maxl = l;
            maxd = d;
        }
    } 

    printf("%d\n", maxd);

    return 0;
}
