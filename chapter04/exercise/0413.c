#include <stdio.h>

int main(void) {
    int n;
    int i, sum;

    printf("n的值："); scanf("%d", &n);
    
    i = 1;
    sum = 0;

    for (; i <= n; i++) {
        sum += i;
    }

    printf("1到%d的和为%d\n", n, sum);

    return 0;
}