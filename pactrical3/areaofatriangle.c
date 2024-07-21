//Write a program to output the calculated area of a triangle based on the user entered height and base values.

#include<stdio.h>

int main(){
	
	int num1;
	int num2;
	int area;
	
	printf("Enter height and base value:");
	
	scanf("%d %d",&num1,&num2);
	
	area=(num1*num2)/2;
	
	printf("The area of the triangle is: %d ",area);
	
	return 0;
	
}

