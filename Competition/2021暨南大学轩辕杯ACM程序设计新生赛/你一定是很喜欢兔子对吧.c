//链接：https://ac.nowcoder.com/acm/contest/26008/E
//第i个敌人有一个强度ai，当你的力量值大于等于敌人强度才可以打败他
//打败敌人后获得bi的力量，请计算初始力量最少为多少才可以打败所有敌人
//运行超时
#include <stdio.h>
void sort(long long a[], long long b[], int n)
{
    int i, j;
    long long k, tempa, tempb;
    for (i = 0; i < (n - 1); i++)
    {
        k = i;
        for (j = (i + 1); j < n; j++)
        {
            if (a[j] < a[k])
            {
                k = j;
            }
        }
        tempa = a[i];
        a[i] = a[k];
        a[k] = tempa;
        tempb = b[i];
        b[i] = b[k];
        b[k] = tempb;
    }
}
long long a[1000000] = { 0 }, b[1000000] = { 0 };
int main()
{
    int n, i, sum, j, r;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%lld %lld", &a[i], &b[i]);
    }
    sort(a, b, n);
    sum = a[0];
    for (i = 0; i < n / 2; i++)
    {
        r = a[i + 1] - a[i] - b[i];
        if (r > 0)
        {
            sum += r;
        }
    }
    printf("%d", sum);
    return 0;
}