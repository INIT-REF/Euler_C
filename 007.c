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
    char* primes = primesieve(114500);;
    int count = 1, i = 1;

    while (count < 10001) {
        i += 2;
        count += primes[i];
    }

    printf("%d \n", i);

    return 0;
}
