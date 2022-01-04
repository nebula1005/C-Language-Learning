//利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来。
#include <stdio.h>

void palin(n)
{
    char next;
    if (n <= 1) 
    {
        next = getchar();
        printf("相反顺序输出结果\40:\40");
        putchar(next);
    }
    else 
    {
        next = getchar();
        palin(n - 1);
        putchar(next);
    }
}
//分析一波，要知道next这个是函数palin内的局部变量，它的生命周期是函数内，作用范围也是函数内
//但是我们在递归，循环调用时，这个函数是运行了很多次的，每个函数都有一个属于自己的next，实际上这个next是不会相互干扰的
//也就是说next实际上确实能储存每一次的输入，它并不会被后来的覆盖，因为每个next都是独立的next，只属于本次调用的函数

int main()
{
    int i = 5;
    printf("请输入5个字符\40:\40");
    palin(i);
    printf("\n");
}