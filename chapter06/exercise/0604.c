#include <stdio.h>

int sqr(int x) {
    return x * x;
}

int pow4(int x) {
    return sqr(x) * sqr(x);
}

int main(void) {
    int x;

    puts("请输入一个整数。");
    printf("整数x:"); scanf("%d", &x);

    printf("%d的四次方是%d。\n", x, pow4(x));

    return 0;
}