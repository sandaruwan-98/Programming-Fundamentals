//display the summation of eny two numbers that are enterd by the user
#include<stdio.h>

int main(){
	int num1;
	int num2;

	printf("Enter two numbers:",num1,num2);
	
	scanf("%d %d",&num1,&num2);
	
	int total=num1+num2;
	
	printf("Sum of the two numbers: %d",total);
	
	return 0;
}
