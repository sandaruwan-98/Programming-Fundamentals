#include<stdio.h>
void Stars(int x);

int main(){
	int no1;
	printf("enter numer to print solid square:");
	scanf("%d",&no1);
	Stars(no1);
return 0;
}

void Stars(int x){
	int i,j;
	for(i=0;i<x;i++){
		for(j=0;j<x;j++){
			printf(" * ");
		}
		printf("\n");
	}
}
