//判断101到200之间的素数。
//程序分析：判断素数的方法：用一个数分别去除2到sqrt(这个数)，如果能被整除， 则表明此数不是素数，反之是素数。

#include <stdio.h>
#include <math.h>

int main()
{
    int num, i;
    for (num = 101; num < 201; num++)
    {
        int flag = 0;   //falg值每次都要归零
        for (i = 2; i <= sqrt(num); i++)
        {
            if (num % i == 0)  //一旦发现可以整除那就绝对不是素数，更改flag值并提前跳出即可
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)   //falg值没有被更改证明没有被整除过，是素数
        {
            printf("%d,", num);
        }
    }
    return 0;
}
