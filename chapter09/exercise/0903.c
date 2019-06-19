#include <stdio.h>
#include <string.h>

#define NUM 8

int main(void) {
    int i;
    char s[NUM][128];

    for (i = 0; i < NUM; i++) {
        printf("s[%d] : ", i);
        scanf("%s", s[i]);

    }

    for (i = 0; i < NUM; i++) {

        printf("s[%d] = \"%s\"\n", i, s[i]);

    }

    return 0;
}