#include <stdio.h>

void null_string(char s[]) {
    s[0] = '\0';
}

int main(void) {
    char s[] = "ABC";

    null_string(s);

    printf("字符串s为\"%s\"。\n", s);

    return 0;
}