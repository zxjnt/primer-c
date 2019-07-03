#include <stdio.h>

/*以实数的形式返回a和b的平均值*/
double ave2(int a, int b) {
    return (double)(a + b) / 2;
}

/*以实数的形式返回数组a的所有元素的平均值*/
double ave_ary(const int a[], int n) {
    int i;
    double sum = 0;

    for (i = 0; i < n; i++) {
        sum += a[i];
    }

    return sum / n;
}

/*将数组b开头的n个元素复制给数组a*/
void cpy_ary(int a[], const int b[], int n) {
    int i;

    for (i = 0; i < n; i++) {
        a[i] = b[i];
    }
}

/*返回二维数组a的所有构成元素的总和*/
int sum_ary2D(const int a[][3], int n) {
    int i, j;
    int sum = 0;

    for (i = 0; i < n; i++)
        for (j = 0; j < 3; j++) {
            sum += a[i][j];
        }

    return sum;
}

int main(void) {
    int n1, n2;
    puts("请输入两个整数。");
    printf("整数1:"); scanf("%d", &n1);
    printf("整数2:"); scanf("%d", &n2);

    printf("平均值是%.1f\n", ave2(n1, n2));

    int num;
    printf("请输入数组个数：");

    do {
        scanf("%d", &num);

        if (num <= 0) {
            printf("请输入正整数：");
        }
    } while (num <= 0);

    int a[num];

    for (int i = 0; i < num; i++) {
        printf("%d:", i + 1);
        scanf("%d", &a[i]);
    }

    printf("该数组所有元素的平均值为：%.1f\n", ave_ary(a, num));

    int cpy_num ;
    printf("请输入复制的元素个数：");

    do {
        scanf("%d", &cpy_num);

        if (cpy_num < 1 || cpy_num > num) {
            printf("请输入1～%d的数：", num);
        }
    } while (cpy_num < 1 || cpy_num > num);

    int copy_a[cpy_num];
    printf("复制%d个元素的新数组为：\n", cpy_num);
    cpy_ary(copy_a, a, cpy_num);

    for (int i = 0; i < cpy_num; i++) {
        printf("%d: %d\n", i + 1, copy_a[i]);
    }

    int tensu[4][3] = {{91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34}};
    int i, j;
    int sum = 0;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%4d", tensu[i][j]);
        }

        putchar('\n');
    }

    printf("以上二维数组所有元素的和为：%d\n", sum_ary2D(tensu, 4));

    return 0;
}