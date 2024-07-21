#include<stdio.h>
#include<conio.h>
int main(){
	int a;//a=10
	int b;//b=20
	
	printf("Enter number 01 value:- ");
	scanf("%d",&a);
	
	printf("Enter number 02 value:- ");
	scanf("%d",&b);
	
	a=a+b;//(10+20)a=30
	b=a-b;//(30-20)b=10
	a=a-b;//(30-10)a=20
	
	printf("________________________________\n");
	printf("|Swap value of number 01:- %d  |\n",a);
	printf("|______________________________|\n");
	printf("|Swap value of number 02:- %d  |\n",b);
	printf("|______________________________|\n");
	
	getch();
	return 0;
	
}

