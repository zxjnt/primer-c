#include <stdio.h>

int combination(int n, int r) {
    if (r == 0 || r == n) {
        return 1;
    } else if (r == 1) {
        return n;
    } else {
        return combination(n - 1, r - 1) + combination(n - 1, r);
    }
}

int main(void) {
    int n, r;

    do {
        printf("请输入正整数n："); scanf("%d", &n);
        printf("请输入非负整数r："); scanf("%d", &r);
    } while (n <= 0 || r < 0);

    printf("从%d个整数中取出%d个整数的组合数为%d：\n", n, r, combination(n, r));

    return 0;
}