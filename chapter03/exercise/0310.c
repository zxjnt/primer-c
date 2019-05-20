#include <stdio.h>

int main(void) {
    int x, y, z;

    puts("请输入三个整数。");
    scanf("%d %d %d", &x, &y, &z);

    if (x == y && y == z) {
        printf("三个值都相等。\n");
    } else if (x == y || y == z || z == x) {
        printf("有两个值相等。\n");
    } else {
        printf("三个值各不相同。\n");
    }

    return 0;
}