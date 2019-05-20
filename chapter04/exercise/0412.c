#include <stdio.h>

int main(void) {
    int no, m, n;

    do {
        printf("请输入一个正整数：");
        scanf("%d", &no);

        if (no <= 0) {
            puts("请不要输入非正整数！！！");
        }
    } while (no <= 0);

    m = no;
    n = 0;

    while (no > 0) {
        no /= 10;
        n++;
    }

    printf("%d的位数是：%d\n", m, n);

    return 0;
}