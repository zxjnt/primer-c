#include <stdio.h>

int main(void) {
    int tensu[2][4][3] = {{{91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34}},
        {{97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35}}
    };

    for (int k = 0; k < 2; k++) {
        printf("第%d次考试分数\n", k + 1);

        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 3; j++) {
                printf("%4d", tensu[k][i][j]);
            }

            printf("\n");
        }

        printf("\n");
    }

    return 0;
}