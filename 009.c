// Solution to Project Euler Problem 009
//
// Using Dickson's Method to create pythagorean triplets  

#include <stdio.h>

int main(void) {

    int finished = 0, r = 2, d, p;

    while (!finished) {
        d = r * r / 2;
        
        for (int i = 1; i * i < d; i++) {
            if (d % i == 0 && 1000 == (3 * r) + (2 * i) + (2 * d / i)) {
                finished = 1;
                p = (r + i) * (r + (d / i)) * (r + i + (d / i));
            }
        }

        r += 2;
    }

    printf("%d\n", p);

    return 0;
}
