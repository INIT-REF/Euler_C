#include <stdio.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int main(void) {
    int tri[100][100] = {0};
    FILE* f = fopen("triangle.txt", "r");
    
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j <= i; j++) {
            fscanf(f, "%d", &tri[i][j]);
        }
    }

    fclose(f);

    for (int i = 98; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            tri[i][j] += max(tri[i+1][j], tri[i+1][j+1]);
        }
    }

    printf("%d\n", tri[0][0]);

    return 0;
}
