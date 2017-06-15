# C-notes

```c
#include <stdio.h>

double cylinder(double r,double h); \\函数声明

int main(){
    double radius;
    double height;
    double volume;
	
    printf("Enter radius and height:"); \\输入提示
    scanf("%lf %lf",&radius,&height); \\double型输入控制符为 %lf
	
    volume = cylinder(radius,height); \\调用函数
    printf("The volume is %.3f\n",volume); \\输出控制3位小数
	
    return 0;
}
 
double cylinder(double r,double h){ \\此处已经定义r,h
    double v,PI;
    PI = 3.1415926;
    v = PI*r*r*h;
	
    return v;\\此函数需要返回值
}
```

