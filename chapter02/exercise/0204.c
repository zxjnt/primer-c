#include <stdio.h>

int main(void) {
    int n = 10;
    double d = 10.0;

    int n1, n2, n3, n4;
    double d1, d2, d3, d4;

    n1 = n * 5;
    n2 = n / 5;
    n3 = d * 5;
    n4 = d / 5;

    d1 = d * 5.0;
    d2 = d / 5.0;
    d3 = n / 5.0;
    d4 = n / 5;

    printf("n1 = %d\n", n1);
    printf("n2 = %d\n", n2);
    printf("n3 = %d\n", n3);
    printf("n4 = %d\n\n", n4);

    printf("d1 = %f\n", d1);
    printf("d2 = %f\n", d2);
    printf("d3 = %f\n", d3);
    printf("d4 = %f\n", d4);

    return 0;
}