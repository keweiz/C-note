/*输入年份和天数，输出对应的年、月、日*/
/*例如，输入2000,61，输出2000-3-1*/
#include <stdio.h>

void month_day (int year, int yearday, int *pmonth, int *pday);

int main(void)
{
    int year, month, day;
    int days;
    int *pmonth = &month, *pday = &day;

    printf("Enter year:");
    scanf("%d",&year);
    printf("Enter days:");
    scanf("%d", &days);

    month_day (year, days, pmonth, pday);

    printf("% d -% d -% d",year, month, day);

    return 0;
}

void month_day (int year, int yearday, int *pmonth, int *pday)
{
    int a[2][13] = { {31,28,31,30,31,30,31,31,30,31,30,31}, 
                    { 31,29,31,30,31,30,31,31,30,31,30,31} };
    int leap = 0;   //判断是否为闰年
    int k;

    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        leap = 1;
    
    *pmonth = 1;    //赋初值
    *pday = yearday;

    for (k = 1; yearday > a[leap][k]; k++)
        yearday -= a[leap][k];
    
    *pmonth = k;
    *pday = yearday;

}