#include <stdio.h>

int main(void) {
    unsigned long long int n[17] = {0};
    unsigned long long int carry = 0, d = 1e18;
    int sum = 0;

    n[16] = 1;
    
    for (int i = 0; i < 1000; i++) {
        for (int j = 16; j >= 0; j--) {
            n[j] = 2 * n[j] + carry;
            carry = n[j] / d;
            n[j] %= d;
        }
    }

    for (int i = 0; i < 17; i++) {
        d = n[i];

        while(d) {
            sum += d % 10;
            d /= 10;
        }
    }

    printf("%d\n", sum);

    return 0;
}
