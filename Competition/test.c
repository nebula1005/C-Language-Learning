//���ӣ�https://ac.nowcoder.com/acm/problem/230955
//�ַ�ħ����·�����ǳ����谭����Ϊħ����������Ϊ�˸��õĸ���ħ����ʷ��ķ������֪���Լ�����������������������
//��֪����������ֵΪn������ÿ�η��ѿ��Ա����������ֵ�ֱ�Ϊa��b���Լ���a��b����Ϊ1��������������
//a��b = n�����Ѻ��ʷ��ķ���Լ������ѣ��󾭹����η��Ѻ�ʷ��ķ��������
#include<stdio.h>
#include<math.h>
int main()
{
    int n, i, count = 0, N;
    scanf("%d", &n);
    N = n;
    for (i = 2; i <= n; i++)
    {
        while (n % i == 0)
        {
            count++;
            n /= i;
        }
    }
    if (N == 1)
        printf("1");
    else
        printf("%d", count);
    return 0;
}