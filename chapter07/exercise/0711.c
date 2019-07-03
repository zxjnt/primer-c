#include <stdio.h>

int main(void) {
    float x;
    float sum_x = 0.0;

    for (x = 0.0; x <= 1.0; x += 0.01) {
        sum_x += x;
    }

    printf("sum_x = %f\n", sum_x);

    int i;
    float sum_y = 0.0;

    for (i = 0; i <= 100; i++) {
        sum_y += i / 100.0;
    }

    printf("sum_y = %f\n", sum_y);
    
    return 0;
}