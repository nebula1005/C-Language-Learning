//有一个已经排好序的数组。现输入一个数，要求按原来的规律将它插入数组中。（数组插入）

#include <stdio.h>

int main()
{
    int arr[11] = { 1,4,6,9,13,16,19,28,40,100 };
    int n, i, j, flag = 0;
    printf("请输入需要插入的数：");
    scanf("%d", &n);
    for (i = 0; i < 10; i++)
    {
        if (n <= arr[i])  //插入中间or头部
        {
            //后移
            for (j = 9; j >= i; j--)
            {
                arr[j + 1] = arr[j];
            }
            //插入
            arr[i] = n;
            flag = 1;  //插入成功改值
            break;
        }
    }
    if (flag == 0)  //插入失败，证明需要插在尾部
    {
        arr[10] = n;
    }
    for (i = 0; i < 11; i++)
    {
        printf("%d,", arr[i]);
    }
    return 0;
}
