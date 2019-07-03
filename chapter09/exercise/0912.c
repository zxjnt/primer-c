#include <stdio.h>
#define NUM 3

/*不改变原数组输出*/
void rev_string(char s[][128], int n) {
    for (int i = 0; i < n; i++) {

        int len = 0;

        while (s[i][len]) {
            len++;
        }

        printf("s[%d] : ", i);

        while (len >= 0) {
            putchar(s[i][--len]);
        }

        printf("\n");
    }
}

/*改变原数组输出？？？*/

int main(void) {
    char s[NUM][128];

    for (int i = 0; i < NUM; i++) {
        printf("s[%d] : ", i);
        scanf("%s", s[i]);
    }

    printf("对每一个字符反转之后为：\n");

    rev_string(s, NUM);

    return 0;
}