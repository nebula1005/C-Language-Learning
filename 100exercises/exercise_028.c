////有5个人坐在一起，问第五个人多少岁？他说比第4个人大2岁。
////问第4个人岁数，他说比第3个人大2岁。问第三个人，又说比第2人大两岁。
////问第2个人，说比第一个人大两岁。最后问第一个人，他说是10岁。请问第五个人多大？
//
//#include <stdio.h>
//
//int main()
//{
//	int age = 10, i;
//	for (i = 0; i < 4; i++)
//	{
//		age += 2;
//	}
//	printf("%d", age);
//}

//用递归的方式实现

#include <stdio.h>

int age(int n, int first_age)
{
	if (n == 1)
	{
		return first_age;
	}
	else
	{
		return age(n - 1, first_age) + 2;
	}
}
int main()
{
	printf("%d", age(5, 10));
	return 0;
}

