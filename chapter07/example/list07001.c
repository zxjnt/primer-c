/*
显示数据类型和变量的长度
*/
#include <stdio.h>

int main(void)
{
	int n;

	printf("%lu\n", sizeof 1);
	printf("%lu\n", sizeof + 1);
	printf("%lu\n", sizeof - 1);

	printf("%lu\n", sizeof(unsigned) - 1);
	printf("%lu\n", sizeof(double) - 1);
	printf("%lu\n", sizeof((double) - 1));

	printf("%lu\n", sizeof n + 2);
	printf("%lu\n", sizeof(n + 2));
	printf("%lu\n", sizeof(n + 2.0));

	return 0;
}