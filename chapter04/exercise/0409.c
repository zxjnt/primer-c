#include <stdio.h>

int main(void) {
    int no;

    printf("正整数：");
    scanf("%d", &no);

    int i = 1;

    while (i <= no) {
        if (i % 2) {
            putchar('+');
        } else {
            putchar('-');
        }

        i++;
    }

    if (no > 0) {
        putchar('\n');
    }

    return 0;
}