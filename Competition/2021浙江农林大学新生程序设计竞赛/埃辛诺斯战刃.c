//链接：https://ac.nowcoder.com/acm/contest/25717/D
//打印一把超级炫酷的埃辛诺斯战刃！
//埃辛诺斯战刃由两个等腰直角三角形和中间的连接柄组成，其中直角边称之为刀身长，连接柄称之为柄长。
//你是一名专门为恶魔猎手打造武器的工匠，请你设计一个程序，打印一把刀身长为 n, 柄长为 m 的埃辛诺斯战刃。
#include <stdio.h>
int main()
{
    int n, m, i, j;
    scanf("%d %d", &n, &m);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < (n - 1); j++)
        {
            printf(" ");
        }
        printf("*\n");
    }
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}