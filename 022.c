// Solution to Project Euler Problem 022

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmpstr(const void* a, const void* b) {
    return strcmp((const char*) a, (const char*)b);
}

int main() {
    int total = 0, sum, j;
    char names[][20]={"MARY","PATRICIA","LINDA", ... };
    
    qsort(names, sizeof(names)/sizeof(names[0]), sizeof(names[0]), cmpstr);

    for (int i = 0; i < sizeof(names)/sizeof(names[0]); i++) {
        sum = 0;
        j = 0;

        while (names[i][j] > 0) {
            sum += names[i][j] - 64;
            j++;
        }

        total += sum * (i + 1);
    }

    printf("%d\n", total);

    return 0;
}
