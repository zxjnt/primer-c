#include <stdio.h>

int main(void) {
    float x;
    double y;
    long double z;

    printf("请输入float型变量x："); scanf("%f", &x);
    printf("请输入double型变量y："); scanf("%lf", &y);
    printf("请输入long double型变量z："); scanf("%Lf", &z);

    printf("您输入的float型变量x为：%f\n", x);
    printf("您输入的double型变量y为：%lf\n", y);
    printf("您输入的long double型变量z为：%Lf\n", z);

    return 0;
}