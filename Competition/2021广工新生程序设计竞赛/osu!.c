//���ӣ�https://ac.nowcoder.com/acm/problem/230931
//Let's play osu!
//ht����ϲ����osu, ��ӵ���ų�����ָ�����������ҵ����٣���Ȼ�����г��ߵ�pp(performance point)��
//ĳһ���Ӣ���ϣ���żȻ������һ�仰�о�Ȼ������"osu"��������У�����������������ע�⣬������������
//����ڿ�ʣ�µ�ʱ���У��ҵ��������������������"osu"����������ʵ��̫���ˣ�����������
//* �ַ������������Ǵ��ַ����н�����Ԫ����ȡ���������ı����λ���γɵ����С�
#include<stdio.h>
int main()
{
    int n, count = 0, i, j, k;
    char s[101] = { 0 };
    scanf("%d", &n);
    getchar();
    gets(s);
    for (i = 0; i < n; i++)
    {
        if (s[i] == 'o')
        {
            for (j = i + 1; j < n; j++)
            {
                if (s[j] == 's')
                {
                    for (k = j + 1; k < n; k++)
                    {
                        if (s[k] == 'u')
                        {
                            count++;
                        }
                    }
                }
            }
        }

    }
    printf("%d", count);
    return 0;
}