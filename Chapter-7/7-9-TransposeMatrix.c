/*矩阵转置*/
/*输入n阶矩阵，将该矩阵转置后输出*/
#include <stdio.h>

int main(void){
    int i, j;
    int matrix [6][6];
    int n;
    int temp;

    printf("Enter n:");
    scanf("%d",&n);
    for(i = 0;i < n;i++){
        for(j = 0;j < n;j++){
            matrix [i][j] = i*n+j+1;
        }
    }

    temp = 0;
    for(i = 0;i < n;i++){
        for(j = i+1;j < n;j++){
            temp = matrix [i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    printf("After transpose:\n");
    for(i = 0;i < n;i++){
        for(j = 0;j < n;j++){
            printf("% 3d",matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}