#include<stdio.h>
#include<conio.h>
int main(){
	int a;
	int b;
	
	printf("Enter number 01 value:- ");
	scanf("%d",&a);
	
	printf("Enter number 02 value:- ");
	scanf("%d",&b);
	
	printf("________________________________\n");
	printf("|Swap value of number 01:- %d  |\n",b);
	printf("|______________________________|\n");
	printf("|Swap value of number 02:- %d  |\n",a);
	printf("|______________________________|\n");
	
	getch();
	return 0;
	
}
