#include <stdio.h>

int prime(int m);

int main() {
	int m;
	int isPrime = 0;
	int count = 1;

	for (m = 1; m <= 100; m++) {
		isPrime = prime(m);
		if (isPrime) {
			printf("% 4d", m); //% 4d，输出格式4位整数，不足的位数用space补齐
			if (count % 10 == 0)
				printf("\n"); //每行10个数，控制回车
			count++;
		}
	}

	printf("\n"); \\最终回车
	getchar();
	return 0;
}

int prime(int m) {
	int i;
	if (m == 1) //1 特殊处理
		return 0;
	for (i = 2; i < m; i++) {
		if (m%i == 0) {
			return 0;
		}
	}
	
	return 1;
}
