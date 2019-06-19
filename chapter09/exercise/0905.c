#include <stdio.h>

int str_char(const char s[], int c) {
    int i = -1;
    int len = 0;

    while (s[len]) {

        if (s[len] == c) {
            i = len;
            break;
        }

        len++;
    }

    return i;
}

int main(void) {
    char str[128];
    char target;

    printf("请输入字符串：");
    scanf("%s", str);

    printf("请输入目标字符：");
    scanf(" %c", &target);/*注意%c前面的空格*/

    printf("目标字符%c的下标为：%d\n",  target, str_char(str, target));

    return 0;
}