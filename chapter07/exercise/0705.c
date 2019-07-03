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

/*n个1的无符号整数*/
unsigned n1(int n) {
    return power2(n) - 1;
}

/*无符号整数x的第pos位到第pos+n-1位的n位设为1，注：pos从0开始计算*/
unsigned set_n(unsigned x, int pos, int n) {
    unsigned result = 0;

    int pos_left = pos + n;
    unsigned temp_left = rrotate(x, pos_left);
    result += lrotate(temp_left, pos_left);

    unsigned temp_mid = n1(n);
    result += lrotate(temp_mid, pos);

    int pos_right = bits - pos;
    unsigned temp_right = lrotate(x, pos_right);
    result += rrotate(temp_right, pos_right);

    return result;
}

/*无符号整数x的第pos位到第pos+n-1位的n位设为0，注：pos从0开始计算*/
unsigned reset_n(unsigned x, int pos, int n) {
    unsigned result = 0;

    int pos_left = pos + n;
    unsigned temp_left = rrotate(x, pos_left);
    result += lrotate(temp_left, pos_left);

    int pos_right = bits - pos;
    unsigned temp_right = lrotate(x, pos_right);
    result += rrotate(temp_right, pos_right);

    return result;
}

/*无符号整数x的第pos位到第pos+n-1位的n位取反，注：pos从0开始计算*/
unsigned inverse_n(unsigned x, int pos, int n) {
    unsigned result = x;

    for (int i = pos; i < pos + n; i++) {
        unsigned res_pos = (x >> i) & 1U;

        if (res_pos == 1) {
            result -= power2(i);
        } else {
            result += power2(i);
        }
    }

    return result;
}

int main(void) {
    unsigned x, pos, n;
    unsigned result_set, result_reset, result_inverse;

    bits = int_bits();

    printf("请输入无符号整数：");
    scanf("%u", &x);

    do {
        printf("请输入开始修改位数：0~%d    ", bits - 1);
        scanf("%u", &pos);
    } while (pos < 0 || pos >= bits);

    do {
        printf("请输入总共修改位数：0~%d    ", bits - pos);
        scanf("%u", &n);
    } while (n < 0 || n > (bits - pos));

    result_set = set_n(x, pos, n);
    result_reset = reset_n(x, pos, n);
    result_inverse = inverse_n(x, pos, n);

    printf("x                 :%d\n", x); print_bits(x);
    printf("\nx的第%d~%d位设为1:%d\n", pos, pos + n - 1, result_set); print_bits(result_set);
    printf("\nx的第%d~%d位设为0:%d\n", pos, pos + n - 1, result_reset); print_bits(result_reset);
    printf("\nx的第%d~%d位取反 :%d\n", pos, pos + n - 1, result_inverse); print_bits(result_inverse);
    printf("\n");
    return 0;
}