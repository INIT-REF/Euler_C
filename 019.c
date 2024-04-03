// Solution to Project Euler Problem 019

#include <stdio.h>

int main(void) {
    int cal[100][12][31] = {0};
    int dim[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    int day = 1, sum = 0;

    for (int y = 1901; y <= 2000; y++) {
        dim[1] = 28;

        if (y % 4 == 0) {
            dim[1] = 29;
        }

        for (int m = 0; m < 12; m++) {
            for (int d = 0; d < dim[m]; d++) {
                cal[y-1901][m][d] = day % 7;

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
