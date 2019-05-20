#include <stdio.h>

int main(void) {
    int i, j;

    printf("  |");

    for (j = 1; j <= 9; j++) {
        printf("%3d",  j);
    }

    putchar('\n');

    for (i = 0; i < 30; i++) {
        printf("-");
    }

    putchar('\n');

    for (i = 1; i <= 9; i++) {
        for (j = 0 ; j <= 9; j++) {
            if (j == 0) {
                printf("%-2d|", i);
            } else {
                printf("%3d", i * j);
            }

        }

        putchar('\n');
    }

    return 0;
}