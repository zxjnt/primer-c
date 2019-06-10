#include <stdio.h>
enum Month {JANUARY = 1, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY,
            AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
           };

int main(void) {
    int month;
    printf("请输入月份："); scanf("%d", &month);

    switch (month) {
    case MARCH:
    case APRIL:
    case MAY: printf("%d月是春季\n", month); break;

    case JUNE:
    case JULY:
    case AUGUST: printf("%d月是夏季\n", month); break;

    case SEPTEMBER:
    case OCTOBER:
    case NOVEMBER: printf("%d月是秋季\n", month); break;

    case DECEMBER:
    case JANUARY:
    case FEBRUARY: printf("%d月是冬季\n", month); break;

    default: printf("您输入的月份不正确\n"); break;
    }

    return 0;
}