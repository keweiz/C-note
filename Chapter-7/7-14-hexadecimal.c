#include <stdio.h>

int main(void)
{
    int i, k;
    long num;       //int 型最大表示2^31-1,远小于16^9即2^36，因此用long，最大为2^63-1
    char str [10];
    char hexa [10];
    //输入字符串
    printf("Enter a string:");
    i = 0;
    while( (str[i] = getchar() ) != '#')
        i++;
    str[i] = '\0';

    //过滤非16进制字符后生成新字符串hexa[]
    k = 0;
    for(i = 0;str[i] != '\0';i++){
        if( (str[i] >= '0' && str[i] <= '9') ||
            (str[i] >= 'a' && str[i] <= 'f') ||
            (str[i] >= 'A' && str[i] <= 'F') ) {
                hexa[k] = str[i];
                k++;
            }
    }
    
    //输出新16进制字符串
    printf("New string:");
    for(k = 0;hexa[k] != '\0';k++)
        putchar(hexa[k]);
    printf("\n");
    
    //转化为十进制
    num = 0;
    for(k = 0;hexa[k] != '\0';k++){
        if(hexa[k] >= '0' && hexa[k] <= '9')
            num = num*16 + hexa[k] - '0';
        else if (hexa[k] >= 'a' && hexa[k] <= 'f')
            num = num*16 + hexa[k] - 'a' + 10;  //'a'代表十六进制10，转化是要注意
        else
            num = num*16 + hexa[k] - 'A' + 10;
    }

    printf("Number is % d\n",num);

    return 0;
}