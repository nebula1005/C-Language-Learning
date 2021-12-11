//利用条件运算符（三目运算符）的嵌套来完成此题：学习成绩>=90分的同学用A表示，60-89分之间的用B表示，60分以下的用C表示。

#include <stdio.h>

int main()
{
    int score;
    char garde;
    printf("请输入分数：");
    scanf("%d", &score);
    printf("%c", score >= 90 ? 'A' : (score < 60 ? 'C' : 'B'));
    return 0;
}
