#include <stdio.h>

void alert(int n) {
    for (int i = 0; i < n; ++i) {
        putchar('\a');
    }
}

int main(void) {
    int x;

    puts("请输入一个整数。");
    printf("整数n:"); scanf("%d", &x);

    alert(x);

    return 0;
}