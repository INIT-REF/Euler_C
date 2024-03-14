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


int main() {
    
    long long int limit = 50000000, n = 0, count = 0;
    int ns[50000000] = {0};

    int* primes = primesieve(7100);

    for (long long int i = 2; i < 7100; i++) {
        if (!primes[i] || i * i > limit)
            continue;
        for (long long int j = 2; i * i + j * j * j < limit; j++) {
            if (!primes[j])
                continue;
            for (long long int k = 2; (n = i * i + j * j * j + k * k * k * k) < limit; k++) {
                if (!primes[k])
                    continue;
                    
                    ns[n] = 1;
            }
        }
    }

    for (int i = 0; i < 50000000; i++)
        count += ns[i];

    printf("%lld\n", count);

    return 0;
}
