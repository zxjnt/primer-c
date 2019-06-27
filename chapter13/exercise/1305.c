#include <time.h>
#include <stdio.h>

char data_file[] = "datetime.dat";

/*取得并显示上一次运行时的日期和时间*/
void get_data(void) {
    FILE *fp;

    if ((fp = fopen(data_file, "r")) == NULL) {
        printf("本程序第一次运行\n");
    } else {
        int year, month, day, h, m, s;
        char f[128];

        fscanf(fp, "%d%d%d%d%d%d%s", &year, &month, &day, &h, &m, &s, f);
        printf("上一次运行是在%d年%d月%d日%d时%d分%d秒，心情！！%s\n", year, month, day, h, m, s, f);

        fclose(fp);
    }
}

/*写入本次运行时的日期和时间*/
void put_data(void) {
    FILE *fp;
    time_t current = time(NULL);
    struct tm *timer = localtime(&current);
    char s[128];

    if ((fp = fopen(data_file, "w")) == NULL) {
        printf("文件打开失败\n");
    } else {
        printf("请输入当前心情："); scanf("%s", s);
        fprintf(fp, "%d  %d  %d  %d  %d  %d  %s\n",
                timer->tm_year + 1900, timer->tm_mon + 1, timer->tm_mday,
                timer->tm_hour, timer->tm_min, timer->tm_sec, s);
        fclose(fp);
    }
}

int main(void) {
    get_data();
    put_data();
    return 0;
}