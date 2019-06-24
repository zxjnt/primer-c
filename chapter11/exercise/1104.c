#include <stdio.h>

void put_string(const char *s) {
    do {
        putchar(*s);
    } while (*s++);
}

int main(void) {
    char *s = "abcdefg";

    put_string(s);
    printf("\n");

    return 0;
}