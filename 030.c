// Solution to Project Euler Problem 030
//
// Using 6 * 9^5 as the upper limit, because 7 * 9^5 is still a 6-digit number

#include <stdio.h>

int main(void) {
    int sum, tmp, p, total = 0;

    for (int i = 2; i < 354294; i++) {
        sum = 0;
        tmp = i;

        while (tmp) {
            p = tmp % 10;
            sum += p * p * p * p * p;
            tmp /= 10;
        }

        if (sum == i) {
            total += i;
        }
    }

    printf("%d\n", total);

    return 0;
}
