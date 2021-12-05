//链接：https://ac.nowcoder.com/acm/contest/25717/C
//众所周知，sht 学长是 ACM 的神。然而有一天，有一些恶犬触犯了神的尊严，他下决心要对这些不敬神的恶犬降下惩罚。
//现给定一张 nn 行 mm 列的地图，每个位置上都有一个数字表示此处区域恶犬的数量。
//sht 决定在一个位置降下雷霆，那么该位置所在行和列上所有的狗都将受到惩罚。
//聪明的你，能帮神计算出他降下一次雷霆，最多能惩罚多少条狗吗？
#include <stdio.h>
int map[3000][3000];
int main()
{
    int n, m, i, j, I = 0, J = 0;
    long long sum, imax = 0, jmax = 0;
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < (m - 1); j++)
        {
            scanf("%d ", &map[i][j]);
        }
        scanf("%d", &map[i][m - 1]);
    }
    for (i = 0; i < n; i++)
    {
        sum = 0;
        for (j = 0; j < m; j++)
        {
            sum += map[i][j];
        }
        if (sum > imax)
        {
            imax = sum;
            I = i;
        }
    }
    for (j = 0; j < m; j++)
    {
        sum = 0;
        for (i = 0; i < n; i++)
        {
            if (i == I)continue;
            sum += map[i][j];
        }
        if (sum > jmax)
        {
            jmax = sum;
            J = j;
        }
    }
    sum = imax + jmax;
    printf("%lld", sum);
    return 0;
}
