//将一个数组逆序输出。

#include <stdio.h>
#define N 10

int main()
{
    int arr[N] = { 0,1,2,3,4,5,6,7,8,9 };
    int i, r;
    for (i = 0; i <= (N / 2) - 1; i++)  //N奇数整除得到半边需要换的数，中位不管；N偶数对半切；故奇偶都适用。-1变序号
    {
        r = arr[i];
        arr[i] = arr[N - 1 - i];
        arr[N - 1 - i] = r;
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d", arr[i]);
        if (i < 9)    //避免末尾有，
        {
            printf(",");
        }
    }
    return 0;
}
