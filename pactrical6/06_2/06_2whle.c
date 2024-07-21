#include<stdio.h>
int main(){
	int i;
	for(i=5;i<=30;i){
		printf("Hello World ");
		char x;
		scanf("%c",&x);
		if(x=='0'){
			break;
		}
	}
	return 0;
}
