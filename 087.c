// Solution to Project Euler Problem 010
//
// Using the same sieve algorithm as problem 007,


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
    
    int limit = 50000000, n = 0, count = 0;
    int ns[50000000] = {0};

    int* primes = primesieve(7100);

    for (int i = 2; (n = i * i) < limit; i++) {
        if (!primes[i])
            continue;
        for (int j = 2; (n += j * j * j) < limit; j++) {
            if (!primes[j])
                continue;
            for (int k = 2; (n += k * k * k * k) < limit; k++) {
                if (!primes[k])
                    continue;
                    
                    ns[n] = 1;
            }
        }
    }

    for (int i = 0; i < 50000000; i++)
        count += ns[i];

    printf("%d\n", count);

    return 0;
}
