//链接：https://ac.nowcoder.com/acm/contest/26008/A
//输入一个长度为n的字符串，若字符串中a的数量大于n/2，则逆序输出，否则正序
#include <stdio.h>
char s[100000] = { 0 };
int main()
{
    int n, i, count = 0;
    scanf("%d", &n);
    getchar();
    for (i = 0; i < n; i++)
    {
        scanf("%c", &s[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (s[i] == 'a')
        {
            count++;
        }
    }
    if (count <= (n / 2))
    {
        for (i = 0; i < n; i++)
        {
            printf("%c", s[i]);
        }
    }
    else
    {
        for (i = (n - 1); i >= 0; i--)
        {
            printf("%c", s[i]);
        }
    }
    return 0;
}
