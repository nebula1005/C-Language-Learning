//链接：https://ac.nowcoder.com/acm/contest/25717/J
//【学姐们的恋爱头脑战！】
//zby大小姐（以下简称朱大小姐）想让zyx学姐（以下简称周少）告白，但是她不想成为先告白的一方,
//于是她随机写了一些数字，想让周少找出这个数组中藏着多少 `520` 。
//数字 `5`、`2` 、`0` 在该数组中出现的顺序可以是任意的，且出现的位置不必连续，以及每个数字只能被计数一次。
//如果周少不能准确说出这个数组中 `520` 的个数，周少就要向朱大小姐告白。
//周少受到辉夜大小姐和白银会长影响，深知在恋爱中先告白的一方就是输家，她当然不想成为输家，
//于是她每次都能准确说对朱大小姐所给数组中 `520` 的个数，这样就可以避免成为先告白的一方了！
//聪明的你，知道周少回答的数字是多少吗？
//【今日的胜负：朱大小姐的败北。】
#include <stdio.h>
int main()
{
    int n, a, i, arr[1000000], j, k, count = 0, flag;
    while (scanf("%d", &n) != EOF)
    {
        for (i = 0; i < (n - 1); i++)
        {
            scanf("%d ", &arr[i]);
        }
        scanf("%d", &arr[n - 1]);
        for (i = 0; i < n; i++)
        {
            flag = 1;
            if (arr[i] == 5)
            {
                for (j = (i + 1); j < n; j++)
                {
                    if (!flag)break;
                    if (arr[j] == 2)
                    {
                        for (k = (j + 1); k < n; k++)
                        {
                            if (arr[k] == 0)
                            {
                                count++;
                                arr[i] = 1;
                                arr[j] = 1;
                                arr[k] = 1;
                                flag = 0;
                                break;
                            }
                        }
                    }
                    else if (arr[j] == 0)
                    {
                        for (k = (j + 1); k < n; k++)
                        {
                            if (arr[k] == 2)
                            {
                                count++;
                                arr[i] = 1;
                                arr[j] = 1;
                                arr[k] = 1;
                                flag = 0;
                                break;
                            }
                        }
                    }
                }
            }
            else if (arr[i] == 2)
            {
                for (j = (i + 1); j < n; j++)
                {
                    if (!flag)break;
                    if (arr[j] == 5)
                    {
                        for (k = (j + 1); k < n; k++)
                        {
                            if (arr[k] == 0)
                            {
                                count++;
                                arr[i] = 1;
                                arr[j] = 1;
                                arr[k] = 1;
                                flag = 0;
                                break;
                            }
                        }
                    }
                    else if (arr[j] == 0)
                    {
                        for (k = (j + 1); k < n; k++)
                        {
                            if (arr[k] == 5)
                            {
                                count++;
                                arr[i] = 1;
                                arr[j] = 1;
                                arr[k] = 1;
                                flag = 0;
                                break;
                            }
                        }
                    }
                }
            }
            if (arr[i] == 0)
            {
                for (j = (i + 1); j < n; j++)
                {
                    if (!flag)break;
                    if (arr[j] == 2)
                    {
                        for (k = (j + 1); k < n; k++)
                        {
                            if (arr[k] == 5)
                            {
                                count++;
                                arr[i] = 1;
                                arr[j] = 1;
                                arr[k] = 1;
                                flag = 0;
                                break;
                            }
                        }
                    }
                    else if (arr[j] == 5)
                    {
                        for (k = (j + 1); k < n; k++)
                        {
                            if (arr[k] == 2)
                            {
                                count++;
                                arr[i] = 1;
                                arr[j] = 1;
                                arr[k] = 1;
                                flag = 0;
                                break;
                            }
                        }
                    }
                }
            }
        }
    }
    printf("%d", count);
    return 0;
}