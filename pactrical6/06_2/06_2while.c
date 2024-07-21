#include<stdio.h>
#include<conio.h>
int main(){
	int i=5;
	while(i<=30){
		printf("Hello world");
		if(_kbhit()){
			if(_getch()=='0'){
				break;
			}
		}
		
	}
	getch();
	return 0;
		
	}

