/*冒泡排序算法*/
/*输入n个正整数，将它们从小到大排序后输出，要求使用冒泡排序*/
#include <stdio.h>

void bubble (int a[], int n);

int main(void)
{
    int n, a[80];
    int i;

    printf("Enter n (n<=80):");
    scanf("%d",&n);
    printf("Enter a[%d]:",n);
    for (i = 0;i < n;i++)
        scanf("%d",&a[i]);
    
    bubble (a, n);

    printf("After sorted, a[%d] = ",n);
    for (i = 0; i < n;i++)
        printf("% 3d", a[i]);

    return 0;
}

void bubble (int a[], int n)
{
    int i, j, t;
    for ( i = 1; i < n; i++)            //外层循环
        for ( j = 0; j < n - i; j++)    //内层循环
            if (a[j] > a[j+1]){         //比较未排序部分相邻两个数的小，并按照大的在后进行交换
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
}
