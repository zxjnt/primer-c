/*
计算两个整数的和与差（误例）
*/
#include <stdio.h>

/*将n1和n2的和、差分别保存至sum、diff（误例）*/
void sum_diff(int n1, int n2, int sum , int diff)
{
	sum = n1 + n2;
	diff = (n1 > n2) ? n1 - n2 : n2 - n1;
}

int main(void)
{
	int na, nb;
	int wa = 0, sa = 0;

	puts("请输入两个整数。");
	printf("整数A："); scanf("%d", &na);
	printf("整数B："); scanf("%d", &nb);

	sum_diff(na, nb, wa, sa);

	printf("两数之和为%d，之差为%d。\n", wa, sa);

	return 0;
}