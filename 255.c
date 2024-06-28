#include <stdio.h>

int main(void) {
    long long int c, x, tmp = 0, frac;

    for (long long int i = 19999999999999; ; i++) {
        x = 7000000;
        tmp = 0;
        c = 0;

        while (x != tmp) {
            tmp = x;
            frac = i / x;
            if (i % x)
                frac++;
            x = (x + frac) / 2;
            c++;
        }

        
            printf("%lld\n", c);
            break;
        
    }

    printf("\n");

    return 0;
}
