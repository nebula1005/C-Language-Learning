//���ӣ�https://ac.nowcoder.com/acm/problem/230953
//���ڣ��ٳ�����n��n����������ɵķ���ÿ�������˶����Լ���һ�޶��ı��i(1��i��n��n)��
//���ڣ������˽̹��������������룬����i�е�j�еĻ����˱��ǡ�õ���(i - 1) ��n + j�����̹�ֻ�ܷ���һ��ָ�
//ָ������ݣ�
//�÷��������ܵĻ�����˳ʱ���߶�һλ���̹ٿ��Է������ָ������Σ����ʽ̹��ܷ��û����˷��������룿
//���ܣ����YES���������NO
#include<stdio.h>
int main()
{
    int n, i, x, y, r, j, flag;
    int a[10][10];
    scanf("%d", &n);
    for (y = 0; y < n; y++)
    {
        for (x = 0; x < n - 1; x++)
        {
            scanf("%d ", &a[x][y]);
        }
        scanf("%d", &a[x][y]);
    }
    if (n == 1)
    {
        printf("YES");
    }
    else
    {
        for (i = 0; i < 36; i++)
        {
            //�ƶ�
            r = a[0][0];
            for (j = 0; j < n - 1; j++)
            {
                a[j][0] = a[j + 1][0];
            }
            for (j = 0; j < n - 1; j++)
            {
                a[n - 1][j] = a[n - 1][j + 1];
            }
            for (j = n - 1; j > 0; j--)
            {
                a[j][n - 1] = a[j - 1][n - 1];
            }
            for (j = n - 1; j > 1; j--)
            {
                a[0][j] = a[0][j - 1];
            }
            a[0][1] = r;
            //�жϣ���������ʵ���ж����ƶ������)
            flag = 1;
            for (y = 0; y < n; y++)
            {
                for (x = 0; x < n; x++)
                {
                    if (a[x][y] != (y * n + x + 1))
                    {
                        flag = 0;
                        break;
                    }
                }
                if (flag == 0)
                {
                    break;
                }
            }
            if (flag == 1)
            {
                printf("YES");
                break;
            }
        }
        if (flag == 0)
        {
            printf("NO");
        }
    }
    return 0;
}