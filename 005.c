// Solution to Project Euler Problem 005


#include <stdio.h>

int gcd(int a, int b) {
    int tmp;

    while (a) {
        tmp = a;
        a = b % tmp;
        b = tmp;
    }

    return b;
}


int lcm(int a, int b) {
    return b * (a / gcd(a, b));
}


int main(void) {

    int result = 1;
    
    for (int i = 2; i <= 20; i++) {
        result = lcm(result, i);
    }

    printf("%d\n", result);

    return 0;
}
