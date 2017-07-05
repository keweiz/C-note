#include <stdio.h>

int main(void)
{
    int i, j;
    int a [3][2];

    printf("Matrix:\n");
    for(i = 0; i < 3;i++){
        for(j = 0; j < 2;j++){
            a [i][j] = i+j;
            printf("% d",a [i][j]);
        }
        printf("\n");
    }

   return 0;
} 
