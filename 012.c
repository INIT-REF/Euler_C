// Solution to Project Euler Problem 012  

#include <stdio.h>

int nDivs(int n) {
    int sum = 1, divs = 1;
    
    while (n % 2 == 0) {
        sum++;
        n /= 2;
    }

    divs *= sum;

    for (int i = 3; i * i <= n; i += 2) {
        sum = 1;

        while (n % i == 0) {
            sum++;
            n /= i;
        }

        divs *= sum;
    }

    if (n > 2) {
        divs *= 2;
    }

    return divs;
}


int main(void) {

    int tri = 1, i = 2;
    
    while(nDivs(tri) < 500) {
        tri += i;
        i++;
    }

    printf("%d\n", tri);

    return 0;
}
