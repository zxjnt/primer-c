#include <stdio.h>
int bits;

/*返回整数x中设置的位数*/
int count_bits(unsigned x) {
    int bits = 0;

    while (x) {
        if (x & 1U) { bits++; }

        x >>= 1;
    }

    return bits;
}

/*返回unsigned型的位数*/
int int_bits(void) {
    return count_bits(~0U);
}

/*2的n次幂*/
unsigned power2(int n) {
    unsigned x = 1;

    while (n > 0) {
        x *= 2;
        n--;
    }

    return x;
}

int main(void) {
    unsigned x, y, z;

    bits = int_bits();
    x = power2(bits) - 1;
    y = 1;
    z = x + y;

    printf("无符号整型 %u + 无符号整型 %u = %u\n", x, y, z);

    return 0;
}