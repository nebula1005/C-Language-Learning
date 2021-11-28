//链接：https://ac.nowcoder.com/acm/problem/230931
//Let's play osu!
//ht姐姐很喜欢玩osu, 她拥有着超凡的指法和无人披靡的手速，当然，还有超高的pp(performance point)。
//某一天大英课上，她偶然发现了一句话中居然出现了"osu"这个子序列，这马上引起了她的注意，于是她决定，
//在这节课剩下的时间中，找到这段文章中所有子序列"osu"。可是文章实在太长了，请你帮帮她。
//* 字符串的子序列是从字符串中将若干元素提取出来并不改变相对位置形成的序列。
#include<stdio.h>
int main()
{
    int n, count = 0, i, j, k;
    char s[101] = { 0 };
    scanf("%d", &n);
    getchar();
    gets(s);
    for (i = 0; i < n; i++)
    {
        if (s[i] == 'o')
        {
            for (j = i + 1; j < n; j++)
            {
                if (s[j] == 's')
                {
                    for (k = j + 1; k < n; k++)
                    {
                        if (s[k] == 'u')
                        {
                            count++;
                        }
                    }
                }
            }
        }

    }
    printf("%d", count);
    return 0;
}