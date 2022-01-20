//求一个3*3矩阵对角线元素之和

#include <stdio.h>
#define N 3  //便于修改矩阵
int main()
{
    int i, j, arr[N][N], sum = 0;
    printf("请输入一个3*3矩阵：\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < N; i++)
    {
        sum += arr[i][i];
    }
    printf("对角线之和为%d", sum);
    return 0;
}
