#include <stdio.h>
#include <math.h>

double funpi(double e); \\function declaration

int main() {
	double e;
	printf("Enter the percision:");
	scanf_s("%lf", &e);

	printf("Pi is %f\n", funpi(e));
	getchar(); //阻止窗口自动关闭
	return 0;
}

double funpi(double e) { //function definetion
	double PI = 0;
	double iterm = 1;
	int flag = 1;
	int denomenator = 1;

	while (fabs(iterm) >= e) { //abs()对整数取绝对值，fabs()对浮点数取绝对值
		
		iterm = 1.0*flag / denomenator;
		PI = PI + iterm;

		denomenator += 2;
		flag *= -1;
	}

	return 4 * PI; //可以return一个表达式
}
