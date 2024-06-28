
#include <stdio.h>

int main(void) {
    unsigned long long int n[10] = {0};
    unsigned long long int carry = 0, d = 1e17;
    int sum = 0;

    n[9] = 1;

    for (int i = 2; i <= 100; i++) {
        for (int j = 9; j >= 0; j--) {
            n[j] = carry + n[j] * i;
            carry = n[j] / d;
            n[j] %= d;
        }
    }

    for (int i = 0; i < 10; i++) {
        while (n[i]) {
            sum += n[i] % 10;
            n[i] /= 10;
        }
    }

    printf("%d\n", sum);

    return 0;
}
