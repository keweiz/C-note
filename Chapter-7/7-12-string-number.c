/*输入一个以回车符结束的字符串(少于80个字符)，并统计该字符串中的数字字符
('0'...'9')的个数*/
#include <stdio.h>

int main(void)
{
    int i;
    int count;
    char str [80];

    i = 0;
    printf("Enter a string:");
    while( (str [i] = getchar() ) != '\n')
        i++;
    str[i] = '\0';

    count = 0;
    for(i = 0; str[i] != '\0';i++){
        if (str[i] >= '0' && str[i] <= '9')
            count ++;
    }

    printf("Numbers of string is :% d",count);

    return 0;
}
