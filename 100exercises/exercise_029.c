//给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。

#include <stdio.h>

int main()
{
	int n, a, b, c, d, e;
	printf("请输入一个不多于5位的正整数：");
	scanf("%d", &n);
	e = n % 10;  //个位
	d = n % 100 / 10;  //十位
	c = n % 1000 / 100;  //百位
	b = n % 10000 / 1000;  //千位
	a = n % 100000 / 10000;  //万位
	if (d == 0)
	{
		printf("一位数。逆序为%d。", e);
	}
	else if (c == 0 && d != 0)
	{
		printf("二位数。逆序为%d%d。", e, d);

	else if (b == 0 && c != 0)
	{
		printf("三位数。逆序为%d%d%d。", e, d, c);
	}
	else if (a == 0 && b != 0)
	{
		printf("四位数。逆序为%d%d%d%d。", e, d, c, b);
	}
	else
	{
		printf("五位数。逆序为%d%d%d%d%d。", e, d, c, b, a);
	}
	}
