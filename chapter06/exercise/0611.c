#include <stdio.h>

int search_idx(const int v[], int idx[], int key, int n) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (v[i] == key) {
            idx[count] = i;
            count++;
        }
    }

    return count;
}
void print_array(const int v[], int n) {
    printf("{ ");

    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }

    printf("}\n");
}
int main(void) {
    int ary[] = {1, 7, 5, 7, 2, 4, 7};
    int idx[] = {0};
    int key = 7;

    int count = 0;

    printf("目标数组："); 
    print_array(ary, 7);

    count = search_idx(ary, idx, 7, 7);
    printf("key为%d的下标为：", key);
    print_array(idx, count);
    printf("共%d个\n", count);

    return 0;
}