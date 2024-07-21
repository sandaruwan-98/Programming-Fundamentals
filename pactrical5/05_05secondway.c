#include<stdio.h>
int main(){
	int i,j,k;
	for(i=1;i<=4;i++){
		for(j=4;j>i;j--){
			printf(" ");
		}
		for(k=1;(i*2)-1>=k;k++){
			printf("*");
		}
		printf("\n");
	}
return 0;
}
