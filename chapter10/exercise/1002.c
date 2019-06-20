#include <stdio.h>

int dpm[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

/**
 * 判断是否闰年
 * @param  year [年]
 * @return      [1为是，0为否]
 */
int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

/**
 * 前一天
 * 1、将天减1
 * 2、判断减1之后是否为0。如果是，月减1
 * 3、判断减1后的月是否为0。如果是年减1，如果不是判断是否2月闰年问题
 * 4、将天置为上一个月的最后一天
 * @param y [年]
 * @param m [月]
 * @param d [日]
 */
void decrement_date(int *y , int *m , int *d) {
    *d -= 1;

    if (*d == 0) {
        *m  -= 1;

        if (*m == 0) {
            *y -= 1;
            *m = 12;
        } else {
            if (*m == 2) {
                if (isLeapYear(*y)) {
                    dpm[2] = 29;
                } else {
                    dpm[2] = 28;
                }
            }
        }

        *d = dpm[*m];
    }
}

/**
 * 后一天
 * 1、将天加1
 * 2、判断是否2月闰年问题
 * 3、判断加1之后的值是否大于当前月最后一天。如果是月加1
 * 4、判断月加1后是否大于12。如果是年加1
 * @param y [年]
 * @param m [月]
 * @param d [日]
 */
void increment_date(int *y , int *m , int *d) {
    *d += 1;

    if (*m == 2) {
        if (isLeapYear(*y)) {
            dpm[2] = 29;
        } else {
            dpm[2] = 28;
        }
    }

    if (*d > dpm[*m]) {
        *d = 1;
        *m += 1;

        if (*m > 12) {
            *y += 1;
            *m = 1;
        }
    }
}

/**
 * 检验输入的年月日是否有误
 * 1、年校验
 * 2、月校验
 * 3、天校验
 * @param year  [年]
 * @param month [月]
 * @param day   [日]
 * @return      [1为error，0为right]
 */
int checkDateError(int year , int month, int day) {
    int errorCode = 0;

    if (year < 0) {
        errorCode = 1;
    }

    if (month < 1 || month > 12) {
        errorCode = 1;
    }

    if (month == 2) {
        if (isLeapYear(year)) {
            dpm[2] = 29;
        } else {
            dpm[2] = 28;
        }
    }

    if (day < 1 || day > dpm[month]) {
        errorCode = 1;
    }

    return errorCode;
}

int main(void) {
    int year, month, day;

    do {
        printf("请输入正确的年 月 日：");
        scanf("%d %d %d", &year, &month, &day);
    } while (checkDateError(year, month, day));

    decrement_date(&year, &month, &day);
    printf("前一天为：%d年%d月%d日。\n", year, month, day);

    increment_date(&year, &month, &day);
    printf("后一天为：%d年%d月%d日。\n", year, month, day);

    return 0;
}