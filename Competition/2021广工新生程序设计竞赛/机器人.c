//链接：https://ac.nowcoder.com/acm/problem/230953
//现在，操场上有n×n个机器人组成的方阵，每个机器人都有自己独一无二的编号i(1≤i≤n×n)。
//现在，机器人教官想让他们排整齐，即第i行第j列的机器人编号恰好等于(i - 1) ×n + j，但教官只能发出一种指令。
//指令的内容：
//让方阵最外周的机器人顺时针走动一位。教官可以发出这个指令任意次，请问教官能否让机器人方阵排整齐？
//若能，输出YES，否则，输出NO
#include<stdio.h>
int main()
{
    int n, i, x, y, r, j, flag;
    int a[10][10];
    scanf("%d", &n);
    for (y = 0; y < n; y++)
    {
        for (x = 0; x < n - 1; x++)
        {
            scanf("%d ", &a[x][y]);
        }
        scanf("%d", &a[x][y]);
    }
    if (n == 1)
    {
        printf("YES");
    }
    else
    {
        for (i = 0; i < 36; i++)
        {
            //移动
            r = a[0][0];
            for (j = 0; j < n - 1; j++)
            {
                a[j][0] = a[j + 1][0];
            }
            for (j = 0; j < n - 1; j++)
            {
                a[n - 1][j] = a[n - 1][j + 1];
            }
            for (j = n - 1; j > 0; j--)
            {
                a[j][n - 1] = a[j - 1][n - 1];
            }
            for (j = n - 1; j > 1; j--)
            {
                a[0][j] = a[0][j - 1];
            }
            a[0][1] = r;
            //判断（赛后发现其实先判断再移动会更好)
            flag = 1;
            for (y = 0; y < n; y++)
            {
                for (x = 0; x < n; x++)
                {
                    if (a[x][y] != (y * n + x + 1))
                    {
                        flag = 0;
                        break;
                    }
                }
                if (flag == 0)
                {
                    break;
                }
            }
            if (flag == 1)
            {
                printf("YES");
                break;
            }
        }
        if (flag == 0)
        {
            printf("NO");
        }
    }
    return 0;
}