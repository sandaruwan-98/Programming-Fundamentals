#include<stdio.h>
#include<conio.h>
int main(){
	int a;
	
	int b;
	
	int avg=0;
	
	printf("enter A:- ");
	scanf("%d",&a);
	
	printf("enter B:- ");
	scanf("%d",&b);
	
	avg=((a+b)/2);
	
	avg>=50? printf("pass\nyour average is:%d",avg),printf("\nWell done"):printf("faill\nyour average is:%d",avg);
	
	getch();
	return 0;
}
