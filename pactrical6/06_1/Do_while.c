/**********Write a C program to get the summation from 1 to 5*********/
/**************************Do while***********************************/
#include<stdio.h>
#include<conio.h>
int main(void){
	int count=1;
	int sum=0;
	
	do{
		sum=sum+count;
		
		count=count+1;
		
	}
	
	while(count<=5);
	printf("%d\n",sum);
getch();
return 0;
}
