#include <stdio.h>

int main(void) {
    int x, y;
    
    printf("请输入两个整数。\n");
    printf("整数A："); scanf("%d", &x);
    printf("整数B："); scanf("%d", &y);

    if (x == y) {
        printf("A和B相等。\n");
    } else if (x > y) {
        printf("A大于B。\n");
    } else {
        printf("A小于B。\n");
    }

    return 0;
}