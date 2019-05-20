#include <stdio.h>

#define NUMBER 20

int main(void) {
    int i;
    int num;
    int v[NUMBER];

    printf("数据个数：");

    do {
        scanf("%d", &num);

        if (num < 1 || num > NUMBER) {
            printf("请输入1-%d的数：", NUMBER);
        }
    } while (num < 1 || num > NUMBER);


    for (i = 0; i < num; i++) {
        printf("%2d号:", i + 1);
        scanf("%d", &v[i]);
    }

    printf("{");

    for (i = 0; i < num; i++) {
        printf("%d", v[i]);

        if (i != num - 1) {
            printf(", ");
        }
    }

    printf("}\n");

    return 0;
}