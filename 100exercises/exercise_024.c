//有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和。

#include <stdio.h>

int main()
{
    int a = 2, i, r;
    float b = 1.0, sum = 0;
    for (i = 0; i < 20; i++)
    {
        sum += a / b;
        r = a;  //中转
        a = a + b;
        b = r;
    }
    printf("%f", sum);
}
