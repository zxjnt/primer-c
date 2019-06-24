#include <stdio.h>
#include <string.h>

int main(void) {
    char *s = "ABCDEFGhijklmn";
    char m[128];
    char n[128];

    printf("字符串的长度为：%lu\n", strlen(s));
    printf("复制字符串：%s\n", strcpy(m, s));
    printf("复制字符串：%s\n", strncpy(n, s, 10));

    char a[128] = "abcdefg";
    char b[128] = "hijklmn";
    char c[10] = "123456789";

    printf("连接字符串：%s\n", strcat(a, c));
    printf("连接字符串：%s\n", strncat(b, c, 5));

    char j[128] = "abcdefg";
    char k[128] = "abcdhmn";

    int cmp1 = strcmp(j, k);

    if (cmp1 == 0) {
        printf("两个字符串相等\n");
    } else if (cmp1 > 0) {
        printf("第一个字符串大\n");
    } else {
        printf("第二个字符串大\n");
    }

    int cmp2 = strncmp(j, k, 4);

    if (cmp2 == 0) {
        printf("两个字符串相等\n");
    } else if (cmp2 > 0) {
        printf("第一个字符串大\n");
    } else {
        printf("第二个字符串大\n");
    }

    return 0;
}