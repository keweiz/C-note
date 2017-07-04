#include <stdio.h>

int main(void)
{
    int i, j, row, col;
    int matrix[3][2];
    
    //输入二维数组
    printf("Enter matrix:");
    for(i = 0;i < 3;i++){
        for(j = 0;j < 2;j++)
            scanf("%d",&matrix[i][j]);
    }

    //矩阵形式输出数组
    for(i = 0;i < 3;i++){
        for(j = 0;j < 2;j++){
            printf("% d",matrix[i][j]);
        }
        printf("\n");   //换行
    }
    
    row = col = 0;
    for(i = 0;i < 3;i++){
        for(j = 0;j < 2;j++){
            if(matrix[i][j] > matrix[row][col]){
                row = i;
                col = j;
            }
        }
    }

    printf("Max = a[%d][%d] = % d",row,col,matrix[row][col]);

    return 0;
}