#include <stdio.h>

void rev_string(char s[]) {
    int len = 0;

    while (s[len]) {
        len++;
    }

    for (int i = 0; i < len / 2; i++) {
        char temp = s[i];
        s[i] = s[len - 1 - i];
        s[len - 1 - i] = temp;
    }

    int i = 0;

    while (s[i]) {
        putchar(s[i++]);
    }
}

int main(void) {
    char str[128];

    printf("请输入字符串：");
    scanf("%s", str);


    printf("逆向输出为：");
    rev_string(str);
    printf("。\n");

    return 0;
}