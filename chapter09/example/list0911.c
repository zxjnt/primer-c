/*
对字符串中的英文字符进行大小写转换
*/
#include <stdio.h>
#include <ctype.h>

/*将字符串中的英文字符转为大写字母*/
void str_toupper(char s[])
{
	int i = 0;
	while (s[i]) {
		s[i] = toupper(s[i]);
		i++;
	}
}

/*将字符串中的英文字符转为小写字母*/
void str_tolower(char s[])
{
	int i = 0;
	while (s[i]) {
		s[i] = tolower(s[i]);
		i++;
	}
}

int main(void)
{
	char str[128];

	printf("请输入字符串：");
	scanf("%s", str);

	str_toupper(str);
	printf("大写字母：%s\n", str);

	str_tolower(str);
	printf("小写字母：%s\n", str);

	return 0;
}