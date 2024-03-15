#include <stdio.h>

int main() {
    int count = 0, tmp, sum;

    for (int n = 2; n <= 10000000; n++) {
        tmp = n;

        while(1) {
            sum = 0;

            while (tmp) {
                sum += (tmp % 10) * (tmp % 10);
                tmp /= 10;
            }

            if (sum == 1)
                break;

            if (sum == 89) {
                count++;
                break;
            }

            tmp = sum;
        }
    }

    printf("%d\n", count);

    return 0;
}
