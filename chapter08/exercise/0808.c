#include <stdio.h>

int gcd(int x, int y) {
    int remainder = x % y;

    if (remainder == 0) {
        return y;
    } else {
        return gcd(y, remainder);
    }
}
int main(void) {
    int x, y;

    printf("请输入两个整数：\n");
    printf("整数1："); scanf("%d", &x);
    printf("整数2："); scanf("%d", &y);

    if (y > x) {
        int temp = x;
        x = y;
        y = temp;
    }

    printf("%d和%d的最大公约数为%d\n", x, y, gcd(x, y));
    return 0;
}