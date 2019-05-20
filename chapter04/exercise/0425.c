#include <stdio.h>

int main(void) {
    int i, j, len;

    printf("让我们来画一个向下的金字塔。\n金字塔有几层：");
    scanf("%d", &len);

    for (i = 1; i <= len; i++) {
        for (j = 0; j < i - 1; j++) {
            putchar(' ');
        }

        for (j = 0; j < (len - i) * 2 + 1; j++) {
            printf("%d", i % 10);
        }

        putchar('\n');
    }

    return 0;
}