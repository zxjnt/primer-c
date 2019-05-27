#include <stdio.h>
#define NUMBER 5

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

    int source_arr[NUMBER] = {1, 2, 3, 4, 5};
    int target_arr[NUMBER] = {0};


    printf("原数组：");
    print_array(source_arr, NUMBER);

    intary_rcpy(target_arr, source_arr, NUMBER);
    printf("倒序后：");
    print_array(target_arr, NUMBER);

    return 0;
}