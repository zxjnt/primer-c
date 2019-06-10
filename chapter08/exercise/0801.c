#include <stdio.h>

#define diff(x, y) ((x) > (y) ? (x - y) : (y - x))

int main(void) {
    int x, y;

    printf("请输入两个整数：\n");
    printf("整数1:"); scanf("%d", &x);
    printf("整数2:"); scanf("%d", &y);

    printf("两个数的差为：%d\n", diff(x, y));

    return 0;
}