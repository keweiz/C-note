/*用指针模拟密码开锁游戏*/
#include <stdio.h>

int main(void)
{
    int x = 5342;   //存放密码
    int *p = NULL;  //定义指针并初始化为NULL

    p = &x;

    printf("If I know the name of the variable, I can get it's value by name:% d\n",x);

    //通过变量x的地址输出密码值
    printf("If I know the address of the variable is:% x,then I also can get it's value by address:% d\n",p,*p);
    
    return 0;

}