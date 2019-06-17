#include <stdio.h>

int count = 0;

void put_count() {
    count++;
    printf("put_count:第%d次\n", count);
}

int main(void) {
    put_count();
    put_count();
    put_count();
    return 0;
}