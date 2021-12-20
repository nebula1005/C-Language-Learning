//两个乒乓球队进行比赛，各出三人。甲队为a,b,c三人，乙队为x,y,z三人。
//已抽签决定比赛名单。有人向队员打听比赛的名单。a说他不和x比，c说他不和x,z比，请编程序找出三队赛手的名单。

#include <stdio.h>

int main()
{
    char i, j, k;
    for (i = 'x'; i <= 'z'; i++)  //与a
    {
        for (j = 'x'; j <= 'z'; j++)  //与b
        {
            for (k = 'x'; k <= 'z'; k++)  //与c
            {
                if (i != j && i != k && j != k && i != 'x' && k != 'x' && k != 'z')
                {
                    printf("比赛名单为：a vs %c,b vs %c,c vs %c。", i, j, k);
                }
            }
        }
    }
    return 0;
}
