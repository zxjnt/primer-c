#include <stdio.h>

void put_stringr(const char s[]) {
    int len = 0;

    while (s[len]) {
        len++;
    }

    while (len >= 0) {
        putchar(s[--len]);
    }
}

int main(void) {
    char str[128];

    printf("请输入字符串：");
    scanf("%s", str);


    printf("逆向输出为：");
    put_stringr(str);
    printf("。\n");
    
    return 0;
}