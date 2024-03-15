#include <stdio.h>

int withOrigin(double x1, double y1, double x2, double y2, double x3, double y3) {
    double a, b, c;

    a = ((y2 - y3) * -x3 + (x3 - x2) * -y3) / ((y2 - y3) * (x1 - x3) + (x3 - x2) * (y1 - y3));
    b = ((y3 - y1) * -x3 + (x1 - x3) * -y3) / ((y2 - y3) * (x1 - x3) + (x3 - x2) * (y1 - y3));
    c = 1 - a - b;

    return (0 <= a && a <= 1 && 0 <= b && b <= 1 && 0 <= c && c <= 1);
}

int main() {
    int count = 0;
    double tris[1000][6] = {0};
    FILE* f = fopen("triangles.txt", "r");
    
    for (int i = 0; i < 1000; i++) {
        for (int j = 0; j < 6; j++) {
            fscanf(f, "%lf,", &tris[i][j]);
        }
    }

    fclose(f);

    for (int i = 0; i < 1000; i++)
        if (withOrigin(tris[i][0], tris[i][1], tris[i][2], tris[i][3], tris[i][4], tris[i][5]))
            count++;

    printf("%d\n", count);

    return 0;
}
