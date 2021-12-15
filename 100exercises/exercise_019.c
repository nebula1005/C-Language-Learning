//一个数如果恰好等于它的因子之和，这个数就称为"完数"。例如6=1＋2＋3.编程找出1000以内的所有完数。

#include <stdio.h>

int main()
{
    int i, j, n, sum;
    for (i = 1; i < 1001; i++)
    {
        sum = 0;   //记得这玩意要写里面每次循环都重置
        n = i;
        for (j = 1; j < n; j++)
        {
            if (n % j == 0)
            {
                sum += j;
            }
        }
        if (i == sum)
        {
            printf("%d\n", n);
        }
    }
    return 0;
}
