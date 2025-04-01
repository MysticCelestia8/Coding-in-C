#include <stdio.h> 
#include <math.h>
int main(){
	float a,b,c;
	printf("Enter 3 sides of a triangle \n");
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	float s,area,store;
	s = (a+b+c)/2;
	store = s*(s-a)*(s-b)*(s-c);
	area = sqrt(store);
	printf("Area of triangle is %.2f\n",area);
	return 0;
}
