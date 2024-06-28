#include <stdio.h>

int isPalindrome(int n) {
    int tmp = n, rev = 0;

    while (tmp) {
        rev = rev * 10 + tmp % 10;
        tmp /= 10;
    }

    return n == rev;
}


int main(void) {
    int max = 0;
    
    for (int i = 100; i < 1000; i++) {
        for (int j = i; j < 1000; j++) {
            if (isPalindrome(i * j) && max < i * j)
                max = i * j;
        }
    }

    printf("%d\n", max);

    return 0;
}
