/*输入10个整数，计算这些数的平均值，再输出所有大于平均值的数*/
#include <stdio.h>

int main(void)
{
    int num[10];
    int i;
    int sum = 0;
    double average;

    printf("Enter 10 integers:");
    
    //输入10个数并求和
    for(i = 0; i < 10; i++){
        scanf("%d",&num[i]);
        sum += num[i];
    }

    average = 1.0*sum/10;       //若没有1.0,会取整后再转换类型，造成数据精度损失
    printf("sum = %d, average = %.2f\n",sum, average);

    for(i = 0; i < 10; i++){
        if(num[i] > average ){ 
            printf("% 2d",num[i]);
        }
    }
    printf("\n");

    return 0;

}
