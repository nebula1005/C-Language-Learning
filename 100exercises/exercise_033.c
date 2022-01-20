//判断一个数字是否为质数。

#include <stdio.h>
#include <math.h>

//定义质数判断函数,返回值是1是，0否
int IsPrime(int n)
{
	int i, flag = 1;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			flag = 0;
			break;
		}
	}
	return flag;
}

int main()
{
	int n, flag;
	scanf("%d", &n);
	flag = IsPrime(n);
	if (flag == 1)
	{
		printf("%d是质数", n);
	}
	else
	{
		printf("%d不是质数", n);
	}
	return 0;
}
