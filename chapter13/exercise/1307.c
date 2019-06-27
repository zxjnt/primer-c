#include <stdio.h>

int main(void) {
    int ch;
    FILE *fp;
    char fname[FILENAME_MAX];
    int count = 0;

    printf("文件名:");
    scanf("%s", fname);

    if ((fp = fopen(fname, "r")) == NULL) {
        printf("\a文件打开失败\n");
    } else {
        while ((ch = fgetc(fp)) != EOF) {
            count++;
        }

        printf("该文件总共有%d个字符\n", count);
        fclose(fp);
    }

    return 0;
}