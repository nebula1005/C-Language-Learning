//输入某年某月某日，判断这一天是这一年的第几天？

#include <stdio.h>

int main()
{
    int year, month, day, sum, leap;
    printf("请输入日期（格式如2021-9-29）：");
    scanf("%d-%d-%d", &year, &month, &day);
    //判断是否是闰年（以下两个条件是或的关系，但不是取其一就行了，因为两个条件对象不同，只有两个都用上才能全面判断
    //1.能被4整除而不能被100整除。
    //2.能被100整除也能被400整除。
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
    default:printf("输入有误。"); break;
    }
    sum = sum + day + leap;
    printf("这一天是这年中的第%d天。", sum);
    return 0;
}
