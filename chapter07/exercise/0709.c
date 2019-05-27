#include <stdio.h>
#include <math.h>

int main(void) {
    double area;

    printf("请输入一个正实数：");
    scanf("%lf", &area);

    printf("面积为%f的正方形的边长为%f\n", area, sqrt(area));
    
    return 0;
}