#include<stdio.h>
#include<conio.h>
int main(){
	int a;
	
	int b;
	
	int c;
	
	int d;
	
	int avg;
	
	printf("enter A:- ");
	scanf("%d",&a);
	
	printf("enter B:- ");
	scanf("%d",&b);
	
	printf("enter C:- ");
	scanf("%d",&c);
	
	printf("enter D:- ");
	scanf("%d",&d);
	
	avg=(a+b+c+d/4);
	
	avg>80?printf("your grade is A"):
	
	avg>70?printf("your grade is B"):	
	
	avg>50?printf("your grade is C"):printf("your grade is F");
		
	getch();
	return 0;
}
