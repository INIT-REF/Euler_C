// Solution to Project Euler Problem 006


#include <stdio.h>

int main() {
    int sumofsquares = 0, squareofsum = 0;

    for (int i = 1; i <= 100; i++) {
        sumofsquares += i * i;
        squareofsum += i;
    }

    squareofsum *= squareofsum;

    printf("%d\n", squareofsum - sumofsquares);

    return 0;
}
