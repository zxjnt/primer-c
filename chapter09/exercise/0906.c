#include <stdio.h>

int str_chnum(const char s[], int c) {
    int count = 0;
    int len = 0;

    while (s[len]) {

        if (s[len] == c) {
            count++;
        }

        len++;
    }

    return count;
}

int main(void) {
    char str[128];
    char target;

    printf("请输入字符串：");
    scanf("%s", str);

    printf("请输入目标字符：");
    scanf(" %c", &target);

    printf("目标字符%c的个数为：%d\n",  target, str_chnum(str, target));

    return 0;
}