//求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。例如2+22+222+2222+22222(此时共有5个数相加)，
//几个数相加由键盘控制。

#include <stdio.h>

int main()
{
    int a, b = 0, n, i, sum = 0;
    printf("请输入a和n的值：");
    scanf("%d %d", &a, &n);
    for (i = 0; i < n; i++)
    {
        b += a;
        a *= 10;
        sum += b;
        if (i < n - 1)
        {
            printf("%d+", b);
        }
        else
        {
            printf("%d=", b);
        }
    }
    printf("%d", sum);
    return 0;
}
