#include <stdio.h>

int main(void) {
    int i, j, len;

    printf("短边："); scanf("%d", &len);
    
    puts("生成直角在左上角的等腰直角三角形。");

    for (i = 1; i <= len; i++) {
        for (j = 0; j <= len - i; j++) {
            putchar('*');
        }

        putchar('\n');
    }

    puts("生成直角在右上角的等腰直角三角形。");

    for (i = 1; i <= len; i++) {
        for (j = 1; j < i; j++) {
            putchar(' ');
        }

        for (j = 0; j <= len - i; j++) {
            putchar('*');
        }

        putchar('\n');
    }

    return 0;
}