#include <stdio.h>

int main(void) {
    int i = 0;
    double d = 0.0;

    for (; i <= 100; i++) {
        printf("x = %f x = %f\n", d, i / 100.0);
        d += 0.01;
    }

    return 0;
}