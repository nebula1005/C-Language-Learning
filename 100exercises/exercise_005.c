//输入三个整数x, y, z，请把这三个数由小到大输出。（低配冒泡排序）

#include <stdio.h>

int main()
{
    int x, y, z, i, j, k, l;
    scanf("%d,%d,%d", &x, &y, &z);
    int arr[3] = { x,y,z };
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                k = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = k;
            }
        }
    }
    for (l = 0; l < 3; l++)
    {
        printf("%d,", arr[l]);
    }
    return 0;
}
