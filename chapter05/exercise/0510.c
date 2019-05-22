#include <stdio.h>

int main(void) {
    int i, j, k;
    int a[4][3] = {0};
    int b[3][4] = {0};
    int c[4][4] = {0};

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("a[%d][%d]:", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("b[%d][%d]:", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("4行3列矩阵a：\n");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%4d", a[i][j]);
        }

        printf("\n");
    }

    printf("3行4列矩阵b：\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%4d", b[i][j]);
        }

        printf("\n");
    }

    printf("矩阵a乘以矩阵b：\n");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            for (k = 0; k < 3; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }

            printf("%4d", c[i][j]);
        }

        printf("\n");
    }

    return 0;
}