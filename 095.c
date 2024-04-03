#include <stdio.h>

int divSum(int n) {
    int dsum = 0;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            if (i == n / i) {
                dsum += i;
            }
            else {
                dsum += i + n / i;
            }
        }
    }

    return ++dsum;
}

int main(void) {
    int nums[1000000] = {0};
    int tmp, l, maxl = 0, smallest;

    for (int i = 4; i <= 1000; i++) {
        if (i == divSum(i))
            continue;

        l = 0;
        tmp = i;
        smallest = i;

        while(tmp <= 1000000 && divSum(tmp) != i && divSum(tmp) != divSum(divSum(tmp))) {
            tmp = divSum(tmp);
            l++;
            if (tmp < smallest)
                smallest = tmp;
        }

        nums[smallest] = l;
    }

    for (int i = 0; i < 1000000; i++)
        if (nums[i] > maxl) {
            maxl = nums[i];
            smallest = i;
        }

    printf("%d\n", smallest);


    return 0;
}
