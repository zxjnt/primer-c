#include <stdio.h>

int main(void) {
    int x , y, z;

    printf("请输入三个整数：\n");
    printf("整数1:"); scanf("%d", &x);
    printf("整数2:"); scanf("%d", &y);
    printf("整数3:"); scanf("%d", &z);

    printf("它们的和是%d\n", x + y + z);

    return 0;
}