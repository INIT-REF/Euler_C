#include <stdio.h>

int main(void) {

    int finished = 0, r = 2, d, abc;

    while (!finished) {
        d = r * r / 2;
        
        for (int i = 1; i * i < d; i++) {
            if (d % i == 0 && 1000 == (3 * r) + (2 * i) + (2 * d / i)) {
                finished = 1;
                abc = (r + i) * (r + (d / i)) * (r + i + (d / i));
                break;
            }
        }

        r += 2;
    }

    printf("%d\n", abc);

    return 0;
}
