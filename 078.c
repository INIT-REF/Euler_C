#include <stdio.h>

int main(void) {

    int p[100000] = {1};
    int n = 0, i, gpn, m, tmp;

    while(1){
        n++;
        i = 0;
        gpn = 1;
 
        while (gpn <= n){
            tmp = p[n];
            if (i & 2)                  // i % 4 > 1?
                tmp -= p[n - gpn];
            else
                tmp += p[n - gpn];
        
            tmp %= 1000000;            // truncate
            p[n] = tmp;
            i++;      
            m = (i >> 1);               // (i / 2) + 1
            m++;
            gpn = 3 * m * m;
        
            if (i & 1)                  // i % 2 == 0?
                gpn += m;
            else
                gpn -= m;
        
            gpn >>= 1;                  // gpn /= 2
    }
                 
    if (!p[n])                          // p[n] == 0?
        break;
}

    printf("%d\n", p[100]);
    return 0;
}
