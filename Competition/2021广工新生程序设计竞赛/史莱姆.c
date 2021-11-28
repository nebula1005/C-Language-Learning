//链接：https://ac.nowcoder.com/acm/problem/230955
//讨伐魔王的路上总是充满阻碍，作为魔王的下属，为了更好的辅佐魔王，史莱姆里曼想知道自己分裂能力的最大分裂数量，
//已知里曼的生命值为n，里曼每次分裂可以变成两个生命值分别为a，b的自己，a，b均不为1的正整数且满足
//a×b = n，分裂后的史莱姆可以继续分裂，求经过最多次分裂后史莱姆的数量。
#include<stdio.h>
#include<math.h>
int main()
{
    int n, i, count = 0, N;
    scanf("%d", &n);
    N = n;
    for (i = 2; i <= n; i++)
    {
        while (n % i == 0)
        {
            count++;
            n /= i;
        }
    }
    if (N == 1)
        printf("1");
    else
        printf("%d", count);
    return 0;
}