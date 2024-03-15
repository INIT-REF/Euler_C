#include <stdio.h>
#include <math.h>

int area(int a, int b, int c) {
    double s, ar;

    s = 0.5 * (a + b + c);
    ar = sqrt(s * (s - a) * (s - b) * (s - c));

    if (ar == floor(ar))
        return floor(ar);

    return 0;
}

int main() {
    
    long long int sum = 0, limit = 1000000000;
    int a = 2, k;

    while(3 * a + 1 < limit) {

        if (area(a, a, a + 1)) {
            sum += 3 * a + 1;
        }
        
        if (area(a, a, a - 1)) {
            sum += 3 * a - 1;
        }

        a++;
    }

    printf("%lld\n", sum);   
            
    return 0;
}
