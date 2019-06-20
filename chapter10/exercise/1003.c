#include <stdio.h>

void swap(int *px, int *py) {
    int temp = *px;
    *px = *py;
    *py = temp;
}

void sort3(int *n1, int *n2, int *n3) {
    if (*n1 > *n2) {
        swap(n1, n2);
    }

    if (*n2 > *n3) {
        swap(n2, n3);

        if (*n1 > *n2) {
            swap(n1, n2);
        }
    }

}

int main(void) {
    int a, b, c;

    printf("请输入三个整数：\n");
    scanf("%d %d %d", &a, &b, &c);

    sort3(&a, &b, &c);

    printf("按升序排列为：%d %d %d\n", a, b, c);

    return 0;
}