#include <stdio.h>

int main(void) {
    double d[10] = {3.125346313, 23.777543, 69.125, 79.8888845, 56.44,
                    38.456, 99.07, 369.123456, 66.543275, 73.2698464724522
                   };

    double r[10];
    FILE *fp;

    if ((fp = fopen("double_test", "wb")) == NULL) {
        printf("文件打开失败！\n");
    } else {
        fwrite(d, sizeof(double), 10, fp);
        fclose(fp);
    }


    if ((fp = fopen("double_test", "rb")) == NULL) {
        printf("文件打开失败！\n");
    } else {
        fread(r, sizeof(double), 10, fp);

        for (int i = 0; i < 10; i++) {
            printf("%.20f\n", r[i]);
        }

        fclose(fp);
    }

    return 0;
}