/*
    显示字符型和整型长度
*/
#include <stdio.h>

int main(void) {
    printf("sizeof(char)  = %u\n", (unsigned)sizeof(char));
    printf("sizeof(short) = %u\n", (unsigned)sizeof(short));
    printf("sizeof(int)   = %u\n", (unsigned)sizeof(int));
    printf("sizeof(long)  = %u\n", (unsigned)sizeof(long));

    /*
    printf("sizeof(float)  = %u\n", (unsigned)sizeof(float));
    printf("sizeof(double)  = %u\n", (unsigned)sizeof(double));
    printf("sizeof(long double)  = %u\n", (unsigned)sizeof(long double));
    */

    return 0;
}