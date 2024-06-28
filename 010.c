#include <stdio.h>
#include <stdlib.h>

char* primesieve(int limit) {
    char* primes = (char*)malloc(limit * sizeof(char));
    
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
    long long int sum = 2;
    char* primes = primesieve(2000000);

    for (int i = 3; i < 2000000; i += 2) {
        sum += i * primes[i];
    }

    printf("%lld\n", sum);

    free(primes);
    return 0;
}
