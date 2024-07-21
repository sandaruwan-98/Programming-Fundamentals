//07_09
#include<stdio.h>
int main(){
int k;
int arr[5][2]={{1000,98},
	{1001,85},
	{1002,90},
	{1003,76},
	{1004,52}};
	
	int maxRegNo=arr[0][0];
	int minRegNo=arr[0][0];
	
	int maxMarks=arr[0][1];//98
	int minMarks=arr[0][1];//98
	
	
	for(k=1;k<5;k++){
		if(minMarks>arr[k][1]){ //52
			minMarks=arr[k][1];//minMarks=52
			minRegNo=arr[k][0];//minRegNo=1004
		}
		if(maxMarks<arr[k][1]){//98<52
			maxMarks=arr[k][1];
			maxRegNo=arr[k][0];
		}
	}
	printf("Minimum marks: %d \n",minMarks);
	printf("Minimum marks Reg no: %d \n",minRegNo);
	printf("Maximum marks: %d \n",maxMarks);
	printf("Maximum marks Reg no: %d \n",maxRegNo);

	
return 0;
}
