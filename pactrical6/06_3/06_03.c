//Write a C program to print numbers from 1 to 10 except 4 and 7
#include<stdio.h>
int main(){
int x;
	for(x=1;x<=10;x++){
		if(x==4||x==7)
		continue;
		printf("%d\n",x);
		}	
return 0;
}
