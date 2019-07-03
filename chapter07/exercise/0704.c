#include <stdio.h>

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

/*显示unsigned型的位的内容*/
void print_bits(unsigned x) {
    int i;

    for (i = int_bits() - 1; i >= 0; i--) {
        putchar(((x >> i) & 1U) ? '1' : '0');
    }
}
/*x右移n位*/
unsigned rrotate(unsigned x, int n) {
    return x >> n;
}

/*x左移n位*/
unsigned lrotate(unsigned x, int n) {
    return x << n;
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

/*无符号整数x的第pos位设为1，注：pos从0开始计算*/
unsigned set(unsigned x, int pos) {
    unsigned res_pos = (x >> pos) & 1U;

    if (res_pos == 1) {
        return x;
    } else {
        return (x + power2(pos));
    }

    /*另一种实现方法，更好的理解左移右移
    if (res_pos == 1) {
        return x;
    } else {
        int count = int_bits();
        unsigned result = 0;

        unsigned temp_left = rrotate(x, pos + 1);
        result += lrotate(temp_left, pos + 1);

        result += lrotate(1, pos);

        unsigned temp_right = lrotate(x, count - pos);
        result += rrotate(temp_right, count - pos);

        return result;
    }
    */
}

/*无符号整数x的第pos位设为0，注：pos从0开始计算*/
unsigned reset(unsigned x, int pos) {
    unsigned res_pos = (x >> pos) & 1U;

    if (res_pos == 0) {
        return x;
    } else {
        return (x - power2(pos));
    }

    /*
    if (res_pos == 1) {
        return x;
    } else {
        int count = int_bits();
        unsigned result = 0;

        unsigned temp_left = rrotate(x, pos + 1);
        result += lrotate(temp_left, pos + 1);

        result += lrotate(0, pos);

        unsigned temp_right = lrotate(x, count - pos);
        result += rrotate(temp_right, count - pos);

        return result;
    }
    */
}

/*无符号整数x的第pos位取反，注：pos从0开始计算*/
unsigned inverse(unsigned x, int pos) {
    unsigned res_pos = (x >> pos) & 1U;

    if (res_pos == 1) {
        return (x - power2(pos));
    } else {
        return (x + power2(pos));
    }

    /*
    int count = int_bits();
    unsigned result = 0;

    unsigned temp_left = rrotate(x, pos + 1);
    result += lrotate(temp_left, pos + 1);

    unsigned res = ((x >> pos) & 1U) ? 0 : 1;
    result += lrotate(res, pos);

    unsigned temp_right = lrotate(x, count - pos);
    result += rrotate(temp_right, count - pos);

    return result;
    */
}

int main(void) {
    unsigned x, n;
    unsigned result_set, result_reset, result_inverse;

    printf("无符号整数："); scanf("%u", &x);
    printf("设置位数："); scanf("%u", &n);

    result_set = set(x, n);
    result_reset = reset(x, n);
    result_inverse = inverse(x, n);

    printf("x            :%d   ", x); print_bits(x);
    printf("\nx的第%d位设为1:%d   ", n, result_set); print_bits(result_set);
    printf("\nx的第%d位设为0:%d   ", n, result_reset); print_bits(result_reset);
    printf("\nx的第%d位取反 :%d   ", n, result_inverse); print_bits(result_inverse);
    printf("\n");

    return 0;
}