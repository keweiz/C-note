/*输出所有大于平均值的数*/
#include <stdio.h>

int main(void) {
	int num[10];
	int i;
	int sum = 0;

	for (i = 0; i < 10; i++) //循环以赋初值给数组
		num[i] = 0;
	printf("Enter 10 integers:");
	
	for (i = 0; i < 10; i++) {
		scanf_s("%d", &num[i]);
		sum += num[i];
	}
	printf("The average of this numbers:%.1f\n", 1.0*sum / 10); //输出平均值，主要控制输出格式
	for (i = 0; i < 10; i++) {
		if (num[i] > sum / 10) {
			printf("% d", num[i]);
		}
			
	}
	printf("\n");

	getchar();
	return 0;

}
