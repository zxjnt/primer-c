#include <stdio.h>

#define swap(type,a,b) {type t;t = a; a = b; b = t;}

int main(void) {
    int a, b;

    printf("请输入两个整数：\n");
    printf("整数a："); scanf("%d", &a);
    printf("整数b："); scanf("%d", &b);

    swap(int, a, b);

    printf("这两个整数交换后为：\n");
    printf("a：%d\n", a);
    printf("b：%d\n", b);

    return 0;
}