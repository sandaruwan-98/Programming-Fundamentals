#include<stdio.h>
#include<conio.h>
int main(){
	int a;

	printf("enter Number:- ");
	scanf("%d",&a);

	if (a%2==0){
		printf("A is a even number");
	}
	else{
		printf("A is a odd number");	
	}

	getch();
	return 0;
}
