/*
显示读取出的整数的最后一位数字
*/
#include <stdio.h>

int main(void)
{
	int no;

	printf("请输入一个整数：");
	scanf("%d", &no);

	printf("最后一位是：%d。\n", no % 10);

	return 0;
}