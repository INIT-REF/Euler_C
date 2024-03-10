// Solution to Project Euler Problem 010
//
// Using the same sieve algorithm as problem 007,


#include <stdio.h>

int primes[2000000] = {0};


void primesieve() {
    
    for (int i = 2; i < 2000000; i++)
        primes[i] = 1;

    for (int i = 2; i * i < 2000000; i++) {
        if (primes[i]) {
            for (int j = i * i; j < 2000000; j += i) {
                primes[j] = 0;
            }
        }   
    }
}


int main() {
    
    long long int sum = 2;
    
    primesieve();

    for (int i = 3; i < 2000000; i += 2) {
        sum += i * primes[i];
    }

    printf("%lld\n", sum);

    return 0;
}
