#include<stdio.h>

int sum(int x,int y);
int sub(int x,int y);
int prod(int x,int y);
int dev(int x,int y);
int rem(int x,int y);

int main(){
	int x,y;
	char opType;
	
	printf("Enter Operater option:");
	scanf("%c",&opType);	
	printf("Enter number-01: ");
	scanf("%d",&x);
	printf("Enter number-02: ");
	scanf("%d",&y);
	
	switch(opType){
		case '+':
			printf("%d + %d = %d",x,y,sum(x,y));
			break;
		case '/':
			printf("%d / %d = %d",x,y,dev(x,y));
			break;
		case '%':
			printf("%d % %d = %d",x,y,rem(x,y));
			break;
		case '-':
			printf("%d - %d = %d",x,y,sub(x,y));
			break;
		case '*':
			printf("%d * %d = %d",x,y,prod(x,y));
			break;
		default:
			printf("!!!Entered sign is invalid!!!!");
			break;
	}
return 0;
}
int sum(int x,int y){
	return x+y;
}
int sub(int x,int y){
	return x-y;
}
int rem(int x,int y){
	return x%y;
}
int prod(int x,int y){
	return x*y;
}
int dev(int x,int y){
	return x/y;
}

