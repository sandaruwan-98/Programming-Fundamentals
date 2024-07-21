#include<stdio.h>
#include<conio.h>
int main(){
	float f=3.14;
	float radius;
	float area;
	
	printf("Enter radious of the circle:-");
	scanf("%f",&radius);
	
	area=f*radius*radius;
	
	printf("Area of a circle is:-%0.2f",area);
	
	getch();
	return 0;
}
