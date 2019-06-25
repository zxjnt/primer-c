#include <stdio.h>

int strtoi(const char *nptr) {
    int value = 0;

    while (*nptr) {
        if (*nptr >= '0' && *nptr <= '9') {
            value = value * 10 + *nptr - '0';
        }

        nptr++;
    }

    return value;
}

long strtol(const char *nptr) {
    long value = 0;

    while (*nptr) {
        if (*nptr >= '0' && *nptr <= '9') {
            value = value * 10 + *nptr - '0';
        }

        nptr++;
    }

    return value;
}

double strtof(const char *nptr) {
    double value = 0;
    int integer = 1;
    double decimal = 0.1;

    while (*nptr) {
        if (*nptr >= '0' && *nptr <= '9') {
            if (integer) {
                value = value * 10 + *nptr - '0';
            } else {
                value = value + (*nptr - '0') * decimal;
                decimal = decimal * 0.1;
            }


        } else if (*nptr == '.') {
            integer = 0;
        }

        nptr++;
    }

    return value;
}

int main(void) {
    char *pi = "324";
    char *pl = "763900000";
    char *pf = "145.926";

    printf("字符串转换为整数：%d\n", strtoi(pi));
    printf("字符串转换为长整数：%ld\n", strtol(pl));
    printf("字符串转换为浮点数：%f\n", strtof(pf));

    return 0;
}