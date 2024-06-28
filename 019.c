#include <stdio.h>

int main(void) {
    int dim[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int day = 1, sum = 0;

    for (int y = 1901; y <= 2000; y++) {
        dim[1] = 28;

        if (!(y & 3)) {
            dim[1] = 29;
        }

        for (int m = 0; m < 12; m++) {
            for (int d = 0; d < dim[m]; d++) {
                if (d == 0 && day % 7 == 6) {
                    sum++;
                }

                day++;
            }
        }
    }

    printf("%d\n", sum);

    return 0;
}
