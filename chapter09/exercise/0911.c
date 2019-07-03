#include <stdio.h>
#include <string.h>

#define NUM 8
#define LEN 128

/*显示字符串数组*/
void put_strary(const char s[][LEN], int n) {
    int i;

    for (i = 0; i < n; i++) {
        printf("s[%d] = \"%s\"\n", i, s[i]);
    }
}

int main(void) {
    char s[NUM][LEN];

    int i;
    int end = NUM;

    char str[] = "$$$$$";

    for (i = 0; i < NUM; i++) {
        printf("s[%d] : ", i);
        scanf("%s", s[i]);

        if (strcmp(s[i], str) == 0) {
            end = i;
            break;
        }
    }

    put_strary(s, end);

    return 0;
}