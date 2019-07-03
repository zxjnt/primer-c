#include <stdio.h>

enum RGB {Red, Green, Blue};

int main(void) {
    int color;

    printf("0～2的值："); scanf("%d", &color);

    printf("你选择了");

    switch (color) {
    case Red: printf("红色\n"); break;

    case Green: printf("绿色\n"); break;

    case Blue: printf("蓝色\n"); break;
    }

    return 0;
}