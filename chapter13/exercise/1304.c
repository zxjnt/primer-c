#include <stdio.h>

typedef struct {
    char name[100];
    double height;
    double weight;
} Student;

int main(void) {
    FILE *fp;
    int num;

    if ((fp = fopen("dt_dat", "w")) == NULL) { /*打开文件*/
        printf("\a文件打开失败\n");
    } else {
        printf("写入几个学生的信息？");
        scanf("%d", &num);

        for (int i = 0; i < num; i++) {
            Student s ;

            printf("%d号姓名：", i + 1); scanf("%s", s.name);
            printf("%d号身高：", i + 1); scanf("%lf", &s.height);
            printf("%d号体重：", i + 1); scanf("%lf", &s.weight);

            fprintf(fp, "%s  %lf  %lf\n",
                    s.name, s.height, s.weight);
        }

        fclose(fp);/*关闭文件*/
    }

    return 0;
}