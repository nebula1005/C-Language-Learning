//一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？

#include <stdio.h>

int main()
{
    int i;
    double h = 100, s = -100;
    for (i = 0; i < 10; i++)
    {
        s += (2 * h);
        h = h / 2.0;
    }
    printf("第十次落地时共经过%lf米，第十次反弹高%lf米。", s, h);
    return 0;
}
