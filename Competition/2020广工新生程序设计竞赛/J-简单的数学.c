//Á´½Ó£ºhttps://ac.nowcoder.com/acm/problem/200313
#include<stdio.h>
#include<math.h>

int main()
{
    int t, i;
    long long n, a;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%lld", &n);
        a = pow(-1, n - 1) * n * (n + 1);
        printf("%lld\n", a);
    }
    return 0;
}