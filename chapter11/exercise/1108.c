#include <stdio.h>

void del_digit(char *str) {
    int i = 0;
    int j = 0;

    for (; * (str + i) != '\0'; i++) {
        if (*(str + i) < '0' || *(str + i) > '9') {
            *(str + j) = *(str + i);
            j++;
        }
    }

    *(str + j) = '\0';
}

int main(void) {
    char s[] = "AB1C9";

    del_digit(s);
    printf("删除数字字符后为：%s\n", s);

    return 0;
}