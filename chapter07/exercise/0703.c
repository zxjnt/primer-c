#include <stdio.h>

/*x右移n位*/
unsigned rrotate(unsigned x, int n) {
    return x >> n;
}

/*x左移n位*/
unsigned lrotate(unsigned x, int n) {
    return x << n;
}

int main(void) {
    unsigned x, n;

    printf("无符号整数："); scanf("%u", &x);
    printf("位移位数："); scanf("%u", &n);

    printf("x           %d\n", x);
    printf("x左移%d位为：%d\n", n, lrotate(x, n));
    printf("x右移%d位为：%d\n", n, rrotate(x, n));

    return 0;
}