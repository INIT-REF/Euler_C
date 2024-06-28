#include <stdio.h>
#include <math.h>

int main(void) {
    int l = 2, count = 0, target = 1000000;

while (count < target) {
    l++;
    for (int wh = 3; wh <= 2 * l; wh++) {
        double rt = sqrt(wh * wh + l * l);                    
        if (rt == (int)(rt)) {
            count += (wh <= l) ? wh / 2 : 1 + (l - (wh+1)/2);
        }
    }
}

    printf("%d\n", l);
    return 0;
}
