#include <stdio.h>

void intary_rcpy(int v1[], const int v2[], int n) {
    for (int i = 0; i < n; i++) {
        v1[i] = v2[n - 1 - i];
    }
}

void print_array(const int v[], int n) {
    printf("{ ");

    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }

    printf("}\n");
}

int main(void) {
    int ary1[] = {0};
    int ary2[] = {1, 2, 3, 4, 5};


    printf("原数组：");
    print_array(ary2, 5);

    intary_rcpy(ary1, ary2, 5);
    printf("倒序后：");
    print_array(ary1, 5);

    return 0;
}