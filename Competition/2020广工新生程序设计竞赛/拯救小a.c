//小a生活在一个只有26个小写字母的文本里，我们知道在26个小写字母里，a是字典序最小的，所以小a十分的自卑，
//今天小a实在是受不了了，他想和伙伴们一起逃出这个文本，在逃出之前，他想问问你，这个文本里一共有多少个a？
#include<stdio.h>
int main()
{
    int count = 0;
    char c;
    while ((c = getchar()) != '.')
    {
        if (c == 'a')
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}