#include <stdio.h>

int main(void) {
    long long int f = 1;
    long long int n;

    for (long long int i = 20; i; i--) {
        //if (i % 10 == 0)
        //    continue;

        n = i % 100000;
        f *= n;

        while (f % 10 == 0) {
            f /= 10;
        }

        f %= 100000;
    }

    printf("%d\n", f);

    return 0;
}
