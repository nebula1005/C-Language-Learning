//求1+2!+3!+...+20!的和。

#include <stdio.h>

//定义阶乘函数
long long fac(int x)
{
    int i;
    long long y = x;
    for (i = 1; i < x; i++)
    {
        y *= (x - i);
    }
    return y;
}

int main()
{
    int i;
    long long sum = 0;
    for (i = 1; i <= 20; i++)
    {
        sum += fac(i);
    }
    printf("%lld", sum);
}
