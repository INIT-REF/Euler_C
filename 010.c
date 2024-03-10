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
    
    long long int sum = 2;
    
    int* primes = primesieve(2000000);

    for (int i = 3; i < 2000000; i += 2) {
        sum += i * primes[i];
    }

    printf("%lld\n", sum);

    return 0;
}
