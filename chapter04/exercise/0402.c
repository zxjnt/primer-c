#include <stdio.h>

int main(void) {
    int a, b;
    int sum, min, max;

    printf("请输入两个整数。\n");
    printf("整数a："); scanf("%d", &a);
    printf("整数b："); scanf("%d", &b);

    if (a > b) {
        max = a; min = b;
    } else {
        max = b; min = a;
    }

    int i = min;
    sum = 0;

    do {
        sum = sum + i;
        i++;
    } while (i <= max);

    printf("大于等于%d小于等于%d的所有整数的和是%d\n", min, max, sum);

    return 0;
}