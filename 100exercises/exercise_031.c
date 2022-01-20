//请输入星期几的第一个字母来判断一下是星期几，如果第一个字母一样，则继续判断第二个字母。monday tuesday wednesday thursday friday satauday sunday

#include <stdio.h>

int main()
{
	char first, second;

	printf("请输入首字母：");
	scanf("%c", &first);
	if (first == 'w')
	{
		printf("星期三");
	}
	else if (first == 'm')
	{
		printf("星期一");
	}
	else if (first == 'f')
	{
		printf("星期五");
	}
	else if (first == 't')
	{
		printf("请输入第二个字母：");
		scanf(" %c", &second);   //%c前加空格，因为scanf前面已经用过一次输入字符，遗留了\n在缓冲区导致这里会直接输入\n
		if (second == 'u')
		{
			printf("星期二");
		}
		else if (second == 'h')
		{
			printf("星期四");
		}
	}
	else if (first == 's')
	{
		printf("请输入第二个字母：");
		scanf(" %c", &second);
		if (second == 'a')
		{
			printf("星期六");
		}
		else if (second == 'u')
		{
			printf("星期日");
		}
	}

}
