#include <stdio.h>

int sumup(int n) {
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    return sum;
}

int main(void) {
    int x;

    puts("请输入一个整数。");
    printf("整数n:"); scanf("%d", &x);

    printf("1~n的所有整数和是%d。\n", sumup(x));
    
    return 0;
}