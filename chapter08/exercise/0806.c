#include <stdio.h>

int factorial(int n) {
    int result = 1;

    if (n > 0) {
        for (; n > 0; n--) {
            result = result * n;
        }
    } else {
        result = 1;
    }

    return result;
}

int main(void) {
    int num;
    printf("请输入一个整数：");
    scanf("%d", &num);

    printf("%d的阶乘为%d\n", num, factorial(num));

    return 0;
}