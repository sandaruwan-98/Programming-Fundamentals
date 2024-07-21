//Write two separate functions for get values to an integer array and print them
#include<stdio.h>
int i;
void printValues(int data[],int num);

void getValues(int num,int data[]){
	printf("Enter values :");
	for(i=0;i<num;i++){
		scanf("%d",&data[i]);
	}
	printvalues(data,num);
}

void printValues(int data[],int num){
	printf("Values of the array : ");
	for(i=0;i<num;i++){
		printf("%d",data[i]);
	}
}

int main(){
	int num;
	printf("Enter the number of values length:");
	scanf("%d",&num);
	
	int data[num];
	
	
	getValues(num,data);
	

return 0;
}
