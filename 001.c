// Solution to Project Euler Problem 001
//
// Using an alternative to the "standard" way with (if i % 3 == 0 || i % 5 == 0)  

#include <stdio.h>

int main() {
    int sum = 0, s = 0;
    int steps[7] = {3, 2, 1, 3, 1, 2, 3};

    for (int i = 3; i < 1000; i += steps[s]) {
        sum += i;
        s = ++s % 7;
    }

    printf("%d\n", sum);

    return 0;
}
