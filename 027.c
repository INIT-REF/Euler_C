#include <stdio.h>
#include <stdlib.h>

int* primesieve(int limit) {
    int* primes = (int*)malloc(limit * sizeof(int));
    
    for (int i = 2; i < limit; i++)
        primes[i] = 1;

    for (int i = 2; i * i < limit; i++) {
        if (primes[i]) {
            for (int j = i * i; j < limit; j += i) {
                primes[j] = 0;
            }
        }   
    }

    return primes;
}


int main(void) { 
    int* primes = primesieve(2000);
    int n, maxn = 0, p;

    for (int b = 2; b < 1000; b++) {
        if (!primes[b]) {
            continue;
        }

        for (int a = -999; a < 1000; a++) {
            n = 0;

            while (primes[(n * n) + (a * n) + b]) {
                n++;
            }

            if (n > maxn) {
                maxn = n;
                p = a * b;
            }
        }
    }    

    printf("%d\n", p);

    free(primes);

    return 0;
}
