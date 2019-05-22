#include <stdio.h>

void mat_mul(const int a[4][3], const int b[3][4], int c[3][3]) {
    int i, j, k;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 4; k++) {
                c[i][j] += b[i][k] * a[k][j];
            }
        }
    }
}

int main(void) {
    int a[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {3, 2, 1}};
    int b[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 1, 2}};
    int c[3][3] = {0};

    printf("4行3列矩阵a：\n");

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%4d  ", a[i][j]);
        }

        printf("\n");
    }

    printf("3行4列矩阵b：\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%4d  ", b[i][j]);
        }

        printf("\n");
    }

    mat_mul(a, b, c);

    printf("3行3列矩阵c：\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%4d  ", c[i][j]);
        }

        printf("\n");
    }

    return 0;
}