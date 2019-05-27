#include <stdio.h>

/*返回整数x中设置的位数*/
int count_bits(unsigned x) {
    int bits = 0;

    while (x) {
        if (x & 1U) { bits++; }

        x >>= 1;
    }

    return bits;
}

/*返回unsigned型的位数*/
int int_bits(void) {
    return count_bits(~0U);
}

/*显示unsigned型的位的内容*/
void print_bits(unsigned x) {
    int i;

    for (i = int_bits() - 1; i >= 0; i--) {
        putchar(((x >> i) & 1U) ? '1' : '0');
    }
}

int main(void) {
    unsigned x, n;
    unsigned x_left, x_right;

    printf("非负整数："); scanf("%u", &x);
    printf("位移位数："); scanf("%u", &n);

    x_left = x << n;
    x_right = x >> n;

    printf("x           %d   ", x); print_bits(x); printf("\n");
    printf("x左移%d位为：%d   ", n, x_left); print_bits(x_left); printf("\n");
    printf("x右移%d位为：%d   ", n, x_right); print_bits(x_right); printf("\n");

    return 0;
}