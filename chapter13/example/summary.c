#include <stdio.h>

int main(void) {
    int ch;
    FILE *fp;
    char fname[FILENAME_MAX];

    printf("目标文件名：");
    scanf("%s\n", fname);

    if ((fp = fopen(fname, "w")) == NULL) {
        printf("无法打开目标文件！\n");
    } else {
        while ((ch = fgetc(stdin)) != EOF) {
            fputc(ch, fp);
        }

        fclose(fp);
    }

    return 0;
}