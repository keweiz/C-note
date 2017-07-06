/*比较三个函数的异同，是否都可以达到交换两个变量值得目的*/

#include <stdio.h>

void swap1 (int x, int y);      //变量名函数形参
void swap2 (int *px, int *py);  //指针为函数形参
void swap3 (int *px, int *py);

int main(void)
{
    int a = 1, b = 2;
    int *pa = &a, *pb = &b;

    swap1 (a, b);
    printf("After calling swap1:a =% d, b =% d\n",a,b);

    a = 1;
    b = 2;
    swap2(pa,pb);
    printf("After calling swap2:a = %d, b = %d\n",a,b);

    a = 1;
    b = 2;
    swap3(pa,pb);
    printf("After calling swap3:a = %d, b = %d\n",a,b);

    return 0;
}

void swap1 (int x, int y)       //直接交换两个变量值
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void swap2 (int *px, int *py)   //通过指针直接修改存储区内容
{
    int temp;
    temp = *px;
    *px = *py;
    *py = temp;
}

void swap3 (int *px, int *py)   //直接改变指针的值(存储的地址量)
{
    int *pt;
    pt = px;
    px = py;
    py = pt;
}