//链接：https://ac.nowcoder.com/acm/contest/25717/A
//秋高气爽，阳光明媚的每一天。
//小学语文老师说：“我说开开，你们说心心”，“我说快快，你们说乐乐”……
//“开开”“心心”    “快快”“乐乐”   “哈哈”“哈哈”   在一片欢声笑语中，我们把成语学会了。
//现在，让我们用同样的方式来了解一小部分算法知识吧！
//我说："gcd"------------------------------------------ - 你说："Greatest common factor"-------------- - (翻译：gcd-- - 最大公因数)
//我说："Fast exponentiation algorithm"-------- - 你说："Fast exponentiation"------------------ - （翻译：快速幂--快速求幂）
//我说："Disjoint Set Union"------------------------你说："Element grouping"----------------------（翻译：并查集--元素分组）
//我说："Dijkstra"--------------------------------------你说："Shortest path"-------------------------- - （翻译：dijkstra-- - 最短路）
//我说："kmp"------------------------------------------你说："Pattern string matching"-------------- - （翻译：kmp--模式串匹配）
//我说："manacher"----------------------------------你说: "Palindrome"-------------------------------- - （翻译：manacher-- - 回文串）
//我说："prim"----------------------------------------你说："Minimum spanning tree"---------------- - （翻译：prim----最小生成树）
//我说："Hungarian algorithm"--------------------你说："Bipartite graph matching"--------------（翻译：匈牙利算法-- - 二分图匹配）
//我说："segment tree"---------------------------- - 你说："Interval maintenance"------------------ - （翻译：线段树--区间维护）
//我说："Nim"---------------------------------------- - 你说：”game"---------------------------------------（翻译：Nim---博弈）
//我说："Polynomial"------------------------------ - 你说: "Dogs don't learn"-------------------------- - （翻译：多项式-- - 狗都不学）
#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    char s[50];
    scanf("%d", &t);
    getchar();
    while (t--)
    {
        gets(s);
        if (strcmp("gcd", s) == 0)printf("Greatest common factor\n");
        else if (strcmp("Fast exponentiation algorithm", s) == 0)printf("Fast exponentiation\n");
        else if (strcmp("Disjoint Set Union", s) == 0)printf("Element grouping\n");
        else if (strcmp("Dijkstra", s) == 0)printf("Shortest path\n");
        else if (strcmp("kmp", s) == 0)printf("Pattern string matching\n");
        else if (strcmp("manacher", s) == 0)printf("Palindrome\n");
        else if (strcmp("prim", s) == 0)printf("Minimum spanning tree\n");
        else if (strcmp("Hungarian algorithm", s) == 0)printf("Bipartite graph matching\n");
        else if (strcmp("segment tree", s) == 0)printf("Interval maintenance\n");
        else if (strcmp("Nim", s) == 0)printf("game\n");
        else if (strcmp("Polynomial", s) == 0)printf("Dogs don't learn\n");
    }
    return 0;
}