//链接：https://ac.nowcoder.com/acm/contest/25717/I
//给出 n(n⩽200) 场比赛的数据，每场比赛给出策策学长这一队伍五个人的数据，k, d, a。其中 k 为 kill(杀敌数)
//d 为 death(死亡数)，a 为 assist(助攻数);
//当策策学长队伍的杀敌人数大于或等于队伍的阵亡人数时候，策策学长队伍获胜，反之失败；
//每名玩家的 kda 计算公式如下：
//kda = (k + a) / d;
//若 d = 0，kda 为 + ∞;
//众所周知，胜利方 kda 最高的玩家是 MVP，失败方 kda 最高的玩家是 SVP。若有人和策策学长并列，则策策学长是 MVP, SVP（来自出题人的偏袒）
//加分机制：
//胜利方玩家加 p 分，MVP 加 2p 分；失败方玩家扣 q 分，SVP 不扣分。
//特别的，分数不会扣到 0 分以下，也不会加到 100 以上，分数到达 100 之后就不会再扣分了。
//策策学长现在是 0 分，只要到 100 分就可以到大师啦！
#include <stdio.h>
int main()
{
    int n, p, q, k, d, a, score = 0, i, flag, j, ksum, dsum, F;
    float kda, kda2;
    scanf("%d %d %d", &n, &p, &q);
    for (i = 0; i < n; i++)
    {
        ksum = 0;
        dsum = 0;
        flag = 1;
        F = 0;
        scanf("%d %d %d", &k, &d, &a);
        ksum += k;
        dsum += d;
        if (d)
        {
            kda = (k + a) / (float)d;
        }
        else
        {
            F = 1;
        }
        for (j = 0; j < 4; j++)
        {
            scanf("%d %d %d", &k, &d, &a);
            ksum += k;
            dsum += d;
            if (d)
            {
                kda2 = (k + a) / (float)d;
                if (kda2 > kda)
                {
                    flag = 0;
                }
            }
            else
            {
                continue;
            }
        }
        if (ksum >= dsum)
        {
            if (flag || F)
            {
                score += 2 * p;
            }
            else
            {
                score += p;
            }
        }
        else
        {
            if (!(flag || F))
            {
                if ((score - q) >= 0)
                {
                    score -= q;
                }
                else
                {
                    score = 0;
                }
            }
        }
        if (score >= 100)
        {
            printf("YES");
            break;
        }
    }
    if (score < 100)printf("NO");
    return 0;
}