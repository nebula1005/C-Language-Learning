//����ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿

#include <stdio.h>

int main()
{
    int year, month, day, sum, leap;
    printf("���������ڣ���ʽ��2021-9-29����");
    scanf("%d-%d-%d", &year, &month, &day);
    //�ж��Ƿ������꣨�������������ǻ�Ĺ�ϵ��������ȡ��һ�����ˣ���Ϊ������������ͬ��ֻ�����������ϲ���ȫ���ж�
    //1.�ܱ�4���������ܱ�100������
    //2.�ܱ�100����Ҳ�ܱ�400������
    if ((year % 100 != 0 && year % 4 == 0) || (year % 100 == 0 && year % 400 == 0))
    {
        leap = 1;
    }
    else
    {
        leap = 0;
    }
    switch (month)
    {
    case 1:sum = 0; break;
    case 2:sum = 31; break;
    case 3:sum = 59; break;
    case 4:sum = 90; break;
    case 5:sum = 120; break;
    case 6:sum = 151; break;
    case 7:sum = 181; break;
    case 8:sum = 212; break;
    case 9:sum = 243; break;
    case 10:sum = 273; break;
    case 11:sum = 304; break;
    case 12:sum = 334; break;
    default:printf("��������"); break;
    }
    sum = sum + day + leap;
    printf("��һ���������еĵ�%d�졣", sum);
    return 0;
}
