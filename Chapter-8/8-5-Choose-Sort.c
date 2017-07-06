/*选择排序算法*/
/*输入n个正整数，将它们从小到大排序后输出，要求使用选择排序*/
#include <stdio.h>

void choose (int a[], int n);

int main(void)
{
    int n, a[80];
    int i;

    printf("Enter n (n<=80):");
    scanf("%d",&n);
    printf("Enter a[%d]:",n);
    for (i = 0;i < n;i++)
        scanf("%d",&a[i]);
    
    choose (a, n);

    printf("After sorted, a[%d] = ",n);
    for (i = 0; i < n;i++)
        printf("% 3d", a[i]);

    return 0;
}

void choose (int a[], int n)
{
  	int i, k, temp;
    int j;
    int index;
  
    for(i = 0;i < n-1;i++){		//外层循环
        index = i;
        for(k = i+1;k < n;k++)	//内层循环
            if(a[k] < a[index])
                index = k;
        temp = a[index];        //交换a[i]和a[index]
        a[index] = a[i];
        a[i] = temp;
    }
}
