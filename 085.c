#include <stdio.h>

int main() {
    int sum, x, y, min, diff, mindiff, target = 2000000;
    long long int area;

    mindiff = target;

    for (x = 1; x < 2000; x++){
        for (y = 1; y < 2000; y++){
            area = x * y;

            if (area * area / 4 > target)
                continue;

            sum = 0;

            for (int a = 1; a <= x; a++) {
                for (int b = 1; b <= y; b++) {
                    sum += a * b;
                }
            }

            diff = target - sum;
            
            if (diff < 0)
                diff = -diff;

            if (diff < mindiff) {
                mindiff = diff;
                min = area;
            }
        }
    }
    


    printf("%d\n", min);

    return 0;
}
