// Solution to Project Euler Problem 003
//
// I skipped the trial divison by 2 because it is an odd number.
// If you wanted to make the solution more universal, you would need to add 
// a separate loop before the one that divides by odd numbes

#include <stdio.h>

int main() {
    long long int n = 600851475143, d;

    for (d = 3; d * d < n; d += 2) {
        while (n % d == 0) {
            n /= d;
        }
    }    
    
    if (n == d)
        printf("%lld\n", n);
    else
        printf("%lld\n", d > n ? d : n);

    return 0;
}
