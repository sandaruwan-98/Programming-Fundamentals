/**********Write a C program to get the summation from 1 to 5*********/
/**************************FOR LOOP***********************************/
#include<stdio.h>
#include<conio.h>
int main(void){
	int count;
	int sum=0;
	
	for(count=1;count<=5;count++){
		sum=sum+count;
	}
	printf("%d\n",sum);
getch();
return 0;
}
