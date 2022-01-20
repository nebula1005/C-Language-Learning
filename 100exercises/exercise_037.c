//对10个数进行排序
//冒泡排序

#include <stdio.h>

int main()
{
    int i, j, k, r;
    int arr[10];
    printf("请输入10个数:");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("排序步骤如下：");
    //轮数循环
    for (j = 0; j < 9; j++)
    {
        //对比循环
        for (k = 0; k < 9; k++)
        {
            if (arr[k] > arr[k + 1])
            {
                r = arr[k + 1];
                arr[k + 1] = arr[k];
                arr[k] = r;
                for (i = 0; i < 10; i++)
                {
                    printf("%d,", arr[i]);
                }
                printf("\n");
            }
        }
    }
    printf("排序结果如下：\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d,", arr[i]);
    }
    return 0;
}
