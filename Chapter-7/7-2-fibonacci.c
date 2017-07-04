/*利用数组计算fibonacci数列的前10个数，并按照每行5个打印输出*/
#include <stdio.h>

int main(void)
{
    int i, count; //临时变量i count
    
    int fibo[10] = {1,1};       //先给定前两个元素

    for(i = 2; i < 10; i++){    //从i=2开始循环，而不是3,前两个是 0，1
        fibo[i] = fibo[i-1] + fibo[i-2];
        //printf("%d %d",i,fibo[i]);
    }

    count = 1;      //计数器初始化
    for(i = 0; i < 10; i++){
        printf("% 2d",fibo[i]);
        if(count % 5 == 0) //控制输出，没5个数换行
            printf("\n");
        count++;
    }
}

