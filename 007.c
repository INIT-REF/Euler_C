// Solution to Project Euler Problem 007
//
// I use the sieve of Eratosthenes to create an array of prime numbers. 
// The upper bound can be found with the fact that the nth prime numer
// is guaranteed to be less than n * (ln n + ln (ln n)).


#include <stdio.h>


int primes[114500] = {0};

void primesieve() {
    
    for (int i = 2; i < 114500; i++)
        primes[i] = 1;

    for (int i = 2; i * i < 114500; i++) {
        if (primes[i]) {
            for (int j = i * i; j < 114500; j += i) {
                primes[j] = 0;
            }
        }   
    }
}

int main() {
    
    int n = 0;
    
    primesieve();
    
    for (int i = 2; i < 114500; i++) {
        n += primes[i];

        if (n == 10001) {
            n = i;
            break;
        }
    }
    

    printf("%d \n", n);

    return 0;
}
