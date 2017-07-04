/*输入n个整数，存入数组中，并输出最小值元素和它对应的下标，
交换最小值元素和第一个数，并输出交换后的数组*/
#include <stdio.h>

int main(void)
{
    int i, n, index, temp;
    int a[10];

    printf("Enter n:");
    scanf("%d",&n);

    printf("Enter %d integers:",n);
    for(i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    
    index = 0;
    for(i = 0;i < n;i++){
        if(a[i] < a[index])
            index = i;      //目前为止的最小值下标赋给index
    }
    printf("min is %d \t subscript is %d\n",a[index],index);
    
    temp = a[index];
    a[index] = a[0];
    a[0] = temp;
    for(i = 0; i < n;i++)
        printf("% d",a[i]); //会在输出的数据前面有一个空格
    return 0;
}