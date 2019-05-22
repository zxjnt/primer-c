#include <stdio.h>

int main(void) {
    int a[6][2] = {0};
    int c[6] = {0};

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 2; j++) {
            printf("a[%d][%d]:", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    int sum1 = 0;
    int sum2 = 0;

    for (int i = 0; i < 6; i++) {
        sum1 += a[i][0];
        sum2 += a[i][1];
        c[i] = a[i][0] + a[i][1];
    }

    printf("语文总分：%d，平均分：%.2f。\n", sum1, sum1 / 6.0);
    printf("数学总分：%d，平均分：%.2f。\n", sum2, sum2 / 6.0);

    for (int i = 0; i < 6; i++) {
        printf("%d号同学总分：%d，平均分：%.2f。\n", i + 1, c[i], c[i] / 2.0);
    }

    return 0;
}