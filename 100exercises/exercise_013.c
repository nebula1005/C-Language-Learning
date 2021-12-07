//打印出100~999所有的"水仙花数"，所谓"水仙花数"是指一个三位数，其各位数字立方和等于该数本身。
//例如：153是一个"水仙花数"，因为153=1的三次方＋5的三次方＋3的三次方。

#include <stdio.h>

int main()
{
    int num, a, b, c;
    for (num = 100; num < 1000; num++)
    {
        c = num % 10;    //提取个位数
        b = num % 100 / 10;     //提取十位数
        a = num / 100;    //提取百位数
        if (num == a * a * a + b * b * b + c * c * c)
        {
            printf("%d\n", num);
        }
    }
    return 0;
}
