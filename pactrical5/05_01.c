#include<stdio.h>
#include<conio.h>
int main(){
	int a;
	
	int b;
	
	int c;
	
	printf("enter A:- ");
	scanf("%d",&a);
	
	printf("enter B:- ");
	scanf("%d",&b);
	
	printf("enter C:- ");
	scanf("%d",&c);
	
	if ((a>b)&&(a>c)){
		printf("A is the highiest number");
	}
	else if((b>a)&&(b>c)){
		printf("B is the highiest number");	
	}
	else if((c>a)&&(c>b)){
		printf("C is the highiest number");
	}
	
	getch();
	return 0;
}
