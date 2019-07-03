#include <stdio.h>

int main(void) {
    printf("float型的长度为%lu\n", sizeof(float));
    printf("double型的长度为%lu\n", sizeof(double));
    printf("long double型的长度为%lu\n", sizeof(long double));
    
    return 0;
}