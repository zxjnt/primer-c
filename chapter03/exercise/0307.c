#include <stdio.h>

int main(void) {
    int a, b, c, d;
    int max;

    printf("请输入四个整数：\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a > b) {
        max = a;
    } else {
        max = b;
    }

    if (c > max) {
        max = c;
    }

    if (d > max) {
        max = d;
    }

    printf("四个数中的最大值是：%d\n", max);

    return 0;
}