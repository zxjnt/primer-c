#include <stdio.h>

int main(void) {
    int i, j;
    int width, height;

    puts("让我们来画一个长方形。");
    printf("一边："); scanf("%d", &width);
    printf("另一边："); scanf("%d", &height);

    if (height > width) {
        int temp = height;
        height = width;
        width = temp;
    }

    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            putchar('*');
        }

        putchar('\n');
    }

    return 0;
}