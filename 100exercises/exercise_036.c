//求100之内的素数。

#include <stdio.h>
#include <math.h>

//素数判断函数
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
    for (n = 2; n <= 100; n++)
    {
        if (IsPrime(n) == 1)
        {
            printf("%d\n", n);
        }
    }
    return 0;
}


//求100之内的素数。

#include <stdio.h>
#include <math.h>


int main()
{
    int n, k;
    for (n = 2; n <= 100; n++)
    {
        int flag = 1;   //重点在这里，经常不小心把flag在外面定义，不在每次循环中重置flag的值
        for (k = 2; k <= sqrt(n); k++)
        {
            if (n % k == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            printf("%d\n", n);
        }
    }
    return 0;
}

