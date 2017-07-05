/*定义函数day_of_year(year,month,day)，计算并返回该年月日对应是该年的第几天*/
#include <stdio.h>

int day_of_year (int year,int month,int day);

int main(void)
{
    int year,month,day;
    int days;
    
    printf("Enter year:");
    scanf("%d",&year);
    printf("Enter month:");
    scanf("%d",&month);
    printf("Enter day:");
    scanf("%d",&day);
    
    days = day_of_year(year,month,day);

    printf("Day of % d/% d/% d is %d\n",year,month ,day,days);

    return 0 ;

}

int day_of_year (int year,int month,int day){
    int k, leap;
    int tab[2][13] = { {0,31,28,31,30,31,30,31,31,30,31,30,31},
                       {0,31,29,31,30,31,30,31,31,30,31,30,31} };     //月份对应天数，包阔闰年
    
    leap = (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);       //leap为1时为闰年

    for(k = 1;k < month;k++){       //从1月开始判断循环
        day = day + tab[leap][k];
    }

    return day;
}