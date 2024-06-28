#include <stdio.h>

int main(void) {
    long long int a = 1, b = 1000000, c = 1, d = 999999, p, q, k;

    while (1) {
        k = (1000000 + b) / d;
        p = (k * c) - a;
        q = (k * d) - b;

        if (p == 3 && q == 7)
            break;
        
        a = c;
        b = d;
        c = p;
        d = q;
    }

    printf("%d/%d\n", c, d);
    
    return 0;
}
