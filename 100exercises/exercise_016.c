//输入两个正整数m和n，求其最大公约数和最小公倍数

#include <stdio.h>

int main()
{
    int m, n, r, o;
    printf("请输入两个正整数：");
    scanf("%d,%d", &m, &n);
    o = m * n;
    //最大公约数判断
    if (m < n)    //判断前提是m>=n
    {
        r = m;
        m = n;
        n = r;
    }
    r = m % n;
    while (r > 0)
    {
        m = n;
        n = r;
        r = m % n;
    }
    printf("这两个数的最大公约数是%d，最小公倍数是%d。", n, o / n);
    return 0;
}
