//利用递归方法求5!。

#include <stdio.h>

int main()
{
	int x = 5, i;
	for (i = 1; i < 5; i++)
	{
		x *= (5 - i);
	}
	printf("%d", x);
}
