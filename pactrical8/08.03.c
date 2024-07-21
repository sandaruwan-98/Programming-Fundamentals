//Write two separate functions for get values to an integer array and print them
#include<stdio.h>
int num;
int data[num];
void getValues();
void printValues();

int main(){
	printf("Enter the number of values length:");
	scanf("%d",&num);
	getValues();
	printValues();
return 0;
}

void getValues(){
	printf("Enter values :");
	scanf("%d",&num);
	int i;
	for(i=0;i<num;i++){
		scanf("%d",&data[i]);
	}
}

void printValues(){
	printf("Values of the array : ");
	int i;
	for(i=0;i<num;i++){
		printf("%d  ",data[i]);
	}
}
