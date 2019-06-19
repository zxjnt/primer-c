#include <stdio.h>

void put_stringn(const char s[], int n) {
    int k = 0;

    for (; k < n; k++) {
        int i = 0;

        while (s[i]) {
            putchar(s[i++]);
        }
    }
}

int main(void) {
    char str[128];
    int num;

    printf("请输入字符串：");
    scanf("%s", str);

    printf("请输入要重复的次数");
    scanf("%d", &num);

    printf("重复%d次输出为：", num);
    put_stringn(str, num);
    printf("。\n");

    return 0;
}