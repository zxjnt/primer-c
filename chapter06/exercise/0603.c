#include <stdio.h>

int cube(int x) {
    return x * x * x;
}

int main(void) {
    int a;

    puts("请输入一个整数。");
    printf("整数a:"); scanf("%d", &a);

    printf("该数的立方是%d。\n", cube(a));

    return 0;
}