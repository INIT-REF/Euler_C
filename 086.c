#include <stdio.h>
#include <math.h>

double min(double l1, double l2, double l3) {
    if (l1 < l2 && l1 < l3)
        return l1;
    if (l2 < l1 && l2 < l3)
        return l2;
    else
        return l3;
}

int main() {
    int i, j, k, m = 1341, count = 0;
    double minl, l1, l2, l3;
    while (1) {
        count = 0;
        for (i = 1; i <= m; i++) {
            for (j = i; j <= m; j++) {
                for (k = j; k <= m; k++) {
                    l1 = sqrt(i * i + (j + k) * (j + k));
                    l2 = sqrt(j * j + (i + k) * (i + k));
                    l3 = sqrt(k * k + (i + j) * (i + j));

                    minl = min(l1, l2, l3);

                    if (minl == floor(minl)){
                        count++; 
                        if (count > 1000000){
                            printf("%d %d %d\n", i, j, k);
                            return 0;
                        }
                    }
                }
            }
        }
        m+=100;
    }

    printf("%d %d %d\n", j, k, i);

    return 0;
}
