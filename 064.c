#include <stdio.h>

int period(int n) {
    int l = 0, a0 = 0, a = 0, num = 0, den = 1;

    for (;a0 * a0 < n; a0++);
    
    if (a0 * a0 == n)
        return 0;

    a0--;
    a = a0;

    while (a != 2 * a0) {
        num = a * den - num;
        den = (n - num * num) / den;
        a = (a0 + num) / den;
        l++;
    }

    return l;
}

int main(void) {
    int sum = 0;

    for (int i = 2; i <= 10000; i++)
        sum += period(i) % 2;

    printf("%d\n", sum);

    return 0;
}
