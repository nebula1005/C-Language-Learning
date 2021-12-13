//输入一行字符，分别统计出其英文字母、空格、数字和其它字符的个数。
//原理写法，其实可以用ctype.h中的函数来直接判断类型

#include <stdio.h>

int main()
{
    char a;
    int letter = 0, space = 0, number = 0, other = 0;
    printf("请输入字符串：");
    while ((a = getchar()) != '\n')   //a = getchar()一定要在条件这里才会被不断赋值如果在外面就是定值了
    {
        if (a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z')   //其实是转化成ASCII码来进行大小比较的
        {
            letter++;
        }
        else if (a == ' ')
        {
            space++;
        }
        else if (a >= '0' && a <= '9')   //也是ASCII码比较
        {
            number++;
        }
        else
        {
            other++;
        }
    }
    printf("英文字母%d个；空格%d个；数字%d个；其他%d个。", letter, space, number, other);
    return 0;
}
