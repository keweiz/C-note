/*判断回文*/
/*输入一个以回车符为结束标志的字符串(少于80个字符),判断该字符串是否为回文*/
#include <stdio.h>

int main(void){
    int i, k;
    char line [80];

    //输入字符串
    printf("Enter a string:");
    k = 0;
    while( (line[k] = getchar() ) != '\n') //以'\n'代替不能直接输入的'\0'为结束输入标志
        k++;
    line[k] = '\0';                         //将最后一位以'\0'代替，作为字符串结束标志
    printf("%d\n",k);
    //判断是否为回文 palindrome
    i = 0;
    k = k - 1;  //k-1是从后往前数第一个有效字符
    //从两侧向中间移动
    while (i < k){
        if (line[i] != line [k])
            break;
        i++;
        k--;
    }
    if(i >= k)      //判断循环是否正常结束
        printf("It is a palindrome\n");
    else
        printf("It is not a palindrome\n");
    
    return 0;
}
