#include <stdio.h>

int main(void) {
    char s[128];
    FILE *fp;

    printf("请输入文件名：");
    scanf("%s", s);

    fp = fopen(s, "r");

    if (fp == NULL) {
        printf("\a无法打开文件。\n");
    } else {
        printf("\a成功打开了文件。\n");
        fclose(fp);
    }

    return 0;
}