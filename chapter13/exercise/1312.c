#include <time.h>
#include <stdio.h>

char data_file[] = "datetime.dat";

/*取得并显示上一次运行时的日期和时间*/
void get_data(void) {
    FILE *fp;
    struct tm *timer;

    if ((fp = fopen(data_file, "rb")) == NULL) {
        printf("本程序第一次运行\n");
    } else {
        printf("1\n");
        fread(timer, sizeof(struct tm), 1, fp);
        printf("2\n");
        printf("上一次运行是在%d年%d月%d日%d时%d分%d秒\n",
               timer->tm_year + 1900, timer->tm_mon + 1, timer->tm_mday,
               timer->tm_hour, timer->tm_min, timer->tm_sec);
        printf("3\n");
        fclose(fp);
    }
}

/*写入本次运行时的日期和时间*/
void put_data(void) {
    FILE *fp;
    time_t current = time(NULL);
    struct tm *timer = localtime(&current);

    if ((fp = fopen(data_file, "wb")) == NULL) {
        printf("文件打开失败\n");
    } else {
        fwrite(timer, sizeof(struct tm), 1, fp);
        fclose(fp);
    }
}

int main(void) {
    get_data();
    put_data();
    return 0;
}