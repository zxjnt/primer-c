#include <stdio.h>

int main(void) {
    int a , b, c;

    a = 5;
    b = 5;
    c = 10;

    printf("相等运算符-相等%d\n", a == b);
    printf("相等运算符-不相等%d\n", a == c);
    printf("关系运算符-大于%d\n", c > a);
    printf("关系运算符-非大于%d\n", a > c);
    printf("关系运算符-小于%d\n", a < c);
    printf("关系运算符-非小于%d\n", c < a);

    return 0;
}