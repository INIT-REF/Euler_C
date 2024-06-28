#include <stdio.h>

void primesieve(char* arr, int l) {
    
    for (int i = 2; i < l; i++)
        arr[i] = 1;

    for (int i = 2; i * i < l; i++) {
        if (arr[i]) {
            for (int j = i * i; j < l; j += i) {
                arr[j] = 0;
            }
        }   
    }
}

int main(void) {
    char primes[114500] = {0};
    int count = 1, i = 1;
    
    primesieve(primes, 114500);

    while (count < 10001) {
        i += 2;
        count += primes[i];
    }

    printf("%d \n", i);

    return 0;
}
