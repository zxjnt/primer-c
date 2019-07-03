#include <stdio.h>

int min_of(const int v[], int n) {
    int i ;
    int min = v[0];

    for (i = 1; i < n; i++) {
        if (v[i] < min) {
            min = v[i];
        }
    }

    return min;
}

int main() {
    int ary[] = {3, 7, 2, 5, 9};

    for (int i = 0; i < 5; i++) {
        printf("%d  ", ary[i]);
    }

    printf("\n");
    printf("最小值为%d\n", min_of(ary, 5));

    return 0;
}