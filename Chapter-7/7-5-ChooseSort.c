/*选择排序法*/
/*输入n个正整数，用选择排序法将他们从小到大排序并输出*/

#include <stdio.h>

int main(void)
{
    int n,i,k,index,temp;
    int a[10];

    printf("Enter n:");
    scanf("%d",&n);

    printf("Enter %d integers:",n);
    for(i = 0;i < n;i++){
        scanf("%d",&a[i]);
    }

    //选择排序法
    for(i = 0;i < n-1;i++){
        index = i;
        
        for(k = i+1;k < n;k++){ //内层循环，用于找到未排序部分最小值
            if(a[k] < a[index])
                index = k;
        }

        temp = a[index];        //交换a[i]和a[index]
        a[index] = a[i];
        a[i] = temp;
    }

    printf("After sorted;");
    for(i = 0;i < n;i++){
        printf("% d",a[i]);     //注意输出格式，最好养成'% d'中空格习惯
    }

    printf("\n");

    return 0;
}