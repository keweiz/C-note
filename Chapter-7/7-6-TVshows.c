/*分类统计*/
/*电视台共8个节目，统计1000名观众对节目的反馈情况（投票给对应节目）
输出每个节目的票数*/

#include <stdio.h>

int main(void)
{
    int i,response;     //response用于记录节目
    int count[9];       //下标1-8分别代表对应节目

    for(i = 1;i <= 8;i++)   //只对1-8进行计数器归 0
        count[i] = 0;
    
    for(i = 1,i <= 1000;i++){           //不是对数组，只是1000个输入，从1开始循环
        printf("Enter your response:");
        scanf("%d",&response);
        if(response >= 1 && response <= 8)  //检查投票是否有效
            count[response]++;
        else
            printf("Invalid:% d\n",response);
    }
    
    printf("result:\n");
    for(i = 1;i <= 8;i++){
        printf("% 4d% 4d\n",i,count[i]);
    }

    return 0;
}