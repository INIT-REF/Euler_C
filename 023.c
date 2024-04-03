// Solution to Project Euler Problem 023

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
    int list[28124] = {0};
    int isAbNum[28124] = {0};

    for (int i = 0; i < 28124; i++) {
        if (divSum(i) > i) {
            isAbNum[i] = 1;
        }
    }
    
    for (int i = 1; i < 28124; i++) {
        if (!isAbNum[i]) {
            continue;
        }

        for (int j = i; j < 28124 - i; j++) {
            if (!isAbNum[j]) {
                continue;
            }
            
            list[i + j] = 1;
        }
    }

    for (int i = 0; i < 28124; i++) {
        sum += i * !list[i];
    }

    printf("%d\n", sum);

    return 0;
}
