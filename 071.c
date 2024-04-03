#include <stdio.h>

int gcd(int a, int b) {
    if (a == 0)
        return b;

    return gcd(b % a, a);
}

int lcm (int a, int b) {
    return b * a / gcd(a, b);
}

int main(void) {
    int res = 1;

    for (int i = 1; i <= 20; i++) {
        res = lcm(res, i);
    }

    printf("%d\n", lcm(15,20));
    return 0;
}
