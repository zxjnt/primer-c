#include <stdio.h>

int main(void) {
    double a;
    int b;

    a = b = 1.5;

    printf("a：%f\n", a);
    printf("b：%d\n", b);

    /*---注意区别---*/
    a = 1.5;
    b = 1.5;

    printf("a：%f\n", a);
    printf("b：%d\n", b);

    return 0;
}