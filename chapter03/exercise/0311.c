#include <stdio.h>

int main(void) {
    int a, b;
    int n;

    puts("请输入两个整数。");
    printf("整数A："); scanf("%d", &a);
    printf("整数B："); scanf("%d", &b);

    n = a > b ? a - b : b - a;

    if (n <= 10) {
        printf("它们的差小于等于10。\n");
    } else {
        printf("它们的差大于等于11。\n");
    }

    return 0;
}