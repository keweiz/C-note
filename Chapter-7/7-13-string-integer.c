/*输入一个以回车符为标志的字符串(长度小于10)
提取其中的数字字符，并将其转化为10进制整数输出*/
#include <stdio.h>

int main(void)
{
    int i,number;
    char str [10];

    printf("Enter a string:");
    i = 0;
    while( (str [i] = getchar() ) != '\n')
        i++;
    str [i] = '\0';

    number = 0;
    for(i = 0; str[i] != '\0';i++){
        if(str[i] >= '0' && str[i] <= '9'){
            number = number*10 + str[i] - '0';  //非常关键，str[i]中存放的是字符'3'等，不是数字
        }
    }

    printf("Integer is:% d\n",number);

    return 0;
}