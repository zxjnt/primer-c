#include <stdio.h>

int main(void) {
    int x;

    printf("请输入一个整数："); scanf("%d", &x);

    if (x > 0) {
        printf("绝对值是%d\n", x);
    } else if (x < 0) {
        printf("绝对值是%d\n", -x);
    } else {
        printf("绝对值是0\n");
    }

    return 0;
}