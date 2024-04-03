// Solution to Project Euler Problem 021

#include <stdio.h>

int divSum(int n) {
    int dsum = 0;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            if (i == n / i) {
                dsum += i;
            }
            else {
                dsum += i + n / i;
            }
        }
    }

    return ++dsum;
}

int main(void) {

    int sum = 0;
    
    for (int i = 1; i < 10000; i++) {
        if (i == divSum(divSum(i)) && i != divSum(i)) {
            sum += i;
        }
    }

    printf("%d\n", sum);
    return 0;
}
