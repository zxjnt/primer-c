#include <stdio.h>

char *str_chr(const char *s, int c) {
    char *t = NULL;

    while (*s) {

        if (*s == c) {
            t = s;
            break;
        }

        s++;
    }

    return t;
}

int main(void) {
    char *s ;
    char c;

    printf("请输入字符串："); scanf("%s", s);
    printf("请输入目标字符："); scanf(" %c", &c);

    char *t = str_chr(s, c);

    if (t == NULL) {
        printf("字符串中不存在目标变量！\n");
    } else {
        printf("字符串中存在目标变量！\n");
    }

    return 0;
}