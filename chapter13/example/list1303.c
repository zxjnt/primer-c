/*
    向文件写出程序运行时的日期和时间
*/
#include <time.h>
#include <stdio.h>

int main(void)
{
    FILE *fp;
    time_t current = time(NULL);/*当前日历的时间*/
    struct tm *timer = localtime(&current);/*分解时间（当地时间）*/

    if ((fp = fopen("dt_dat", "w")) == NULL)/*打开文件*/
        printf("\a文件打开失败\n");
    else {
        printf("写出当前日期和时间\n");
        fprintf(fp, "%d  %d  %d  %d  %d  %d\n",
                timer->tm_year + 1900, timer->tm_mon + 1, timer->tm_mday,
                timer->tm_hour, timer->tm_min, timer->tm_sec);
        fclose(fp);/*关闭文件*/
    }

    return 0;
}