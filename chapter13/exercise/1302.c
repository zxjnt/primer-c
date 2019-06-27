#include <stdio.h>

int main(void) {
    char s[128];
    FILE *fp;

    printf("请输入文件名：");
    scanf("%s", s);

    fp = fopen(s, "w");

    if (fp == NULL) {
        printf("\a无法打开文件。\n");
    } else {
        printf("\a成功消除文件内容。\n");
        fclose(fp);
    }

    return 0;
}