//链接：https://ac.nowcoder.com/acm/contest/26008/B
//定义圣嘉然数列F(0)=0,F(1)=1,F(n)=F(n-1)+F(n+1),n∈N*,n≥2
//请计算F(n) mod 998244353
#include <stdio.h>
int main()
{
    int n, a[1000000] = { 0 }, i;
    scanf("%d", &n);
    a[0] = 0;
    a[1] = 1;
    for (i = 2; i <= n; i++)
    {
        a[i] = (a[i - 1] + a[i - 2]) % 998244353;
    }
    printf("%d", a[n]);
    return 0;
}
