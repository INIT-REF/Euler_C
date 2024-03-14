#include <stdio.h>

void sub(int* a, int* b) {
    int carry = 0, tmp = 0;

    for (int i = 109; i > 0; i--) {
        carry = a[i] < (b[i] + tmp);
        a[i] += 10 * carry;
        a[i] -= b[i] + tmp;
        tmp = carry;
    }

    carry = 1;

    for (int i = 108; i > 0; i--) {
        b[i] += carry;
        carry = b[i] / 10;
        b[i] %= 10;    
    }
}

void mul(int* a, int* b) {
    for (int i = 0; i < 108; i++) {
        a[i] = a[i+2];
        b[i] = b[i+1];
    }

    a[108] = a[109] = 0;
    b[108] = 0;
}

int a_greater_b(int* a, int*b) {
    for (int i = 0; i < 110; i++) {
        if (a[i] > b[i])
            return 1;
        if (b[i] > a[i])
            return 0;
    }
}

int init(int *a, int* b, int n){
    for (int i = 0; i < 110; i++) {
        a[i] = 0;
        b[i] = 0;
    }

    b[109] = 5;
    n *= 5;
    a[107] = n / 100;
    a[108] = (n % 100) / 10;
    a[109] = (n % 10);
}

int main() {
    int a[110] = {0};
    int b[110] = {0};
    int sum = 0;

    for (int i = 2; i < 100; i++) {
        if (i == 4 || i == 9 || i == 16 || i == 25 || i == 36 || i == 49 || i == 64 || i == 81)
            continue;
    
        init(a, b, i);

        while(!b[1]) {
            if (a_greater_b(a, b))
                sub(a, b);
            else
                mul(a, b);
        }
    
        for (int i = 1; i < 101; i++) {
            sum += b[i];
        }
    }    
    
    printf("%d\n", sum);

}
