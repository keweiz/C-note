#include <stdio.h>

double cylinder(double r,double h);

int main(){
	double radius;
	double height;
	double volume;
	
	printf("Enter radius and height:");
	scanf("%lf %lf",&radius,&height);
	
	volume = cylinder(radius,height);
	printf("The volume is %.3f\n",volume);
	
	return 0;
}
 
double cylinder(double r,double h){
	double v,PI;
	PI = 3.1415926;
	
	v = PI*r*r*h;
	
	return v;
}
