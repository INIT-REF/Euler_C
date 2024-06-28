#include <stdio.h>

int main(void) {
    char ones[] = {0, 3, 3, 5, 4, 4, 3, 5, 5, 4};
    char teens[] = {3, 6, 6, 8, 8, 7, 7, 9, 8, 8};
    char tens[] = {0, 0, 6, 6, 5, 5, 5, 7, 6, 6};
    char hundreds[] = {0, 10, 10, 12, 11, 11, 10, 12, 12, 11};
    int sum = 11; //for 1000 
    
    sum += 9 * 99 * 3; //for 9 * 99 * "and" in 100s 
                       
    for (int i = 1; i < 1000; i++) {
        if (i % 100 < 10)
            sum += ones[i % 10];
        else if (i % 100 < 20)
            sum += teens[i % 10];
        else
            sum += tens[i % 100 / 10] + ones[i % 10];

        sum += hundreds[i / 100];
    }

    printf("%d\n", sum);
    return 0;
}
