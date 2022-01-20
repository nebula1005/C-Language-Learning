//字符串反转，如将字符串 "www.runoob.com" 反转为 "moc.boonur.www"。
//直接主函数运行写法

#include <stdio.h>

int main()
{
    char s1[50] = { '1','2' }, s2[50] = { '1' };  //随便写一个初始化避免出问题，反正会被替换
    int i;
    gets(s1);
    for (i = strlen(s1) - 1; i >= 0; i--)  //主要是理清楚下标
    {
        s2[strlen(s1) - 1 - i] = s1[i];
    }
    printf("%s", s2);
    return 0;
}
