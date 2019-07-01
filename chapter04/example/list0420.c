/*
    输入一个整数，显示出该整数个*（循环次数可以任意指定）
*/
#include <stdio.h>

int main(void) {
    int retry;

    do {
        int i, no;

        do {
            printf("请输入一个正整数：");
            scanf("%d", &no);

            if (no <= 0) {
                puts("请不要输入非正整数！！！");
            }
        } while (no <= 0);

        for (i = 1; i <= no; i++) {
            putchar('*');
        }

        putchar('\n');

        printf("是否继续执行？【Yes……0/NO……9】：");
        scanf("%d", &retry);
    } while (retry == 0);

    return 0;
}