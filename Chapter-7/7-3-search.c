/*顺序查找法*/
/*输入5个整数，将他们存入数组a中，再输入1个数x然后在数组中查找x，如果找到，输出相应的最小下标，否则，输出"NOT FOUND"*/

#include <stdio.h>

int main(void){
    int i, x , flag;            //flag用于判别是否找到
    int a[5];
    printf("Enter 5 integers:");
    for(i = 0; i < 5; i++){
        scanf("%d",&a[i]);
    }

    printf("Enter x:");
    scanf("%d",&x);

    flag = 0;
    for(i = 0; i < 5; i++){
        if(a[i] == x){
            printf("Index is %d",i);
            flag = 1;           //存在则改变flag值
            break;
        }
    }
    if(flag == 0)
        printf("NOT FOUND\n");
    
    return 0;
    
}