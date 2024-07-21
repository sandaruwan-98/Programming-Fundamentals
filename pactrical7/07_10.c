//07_10
#include<stdio.h>
int main(){
int k;
int arr[5][2]={{1000,0},
	{1001,0},
	{1002,0},
	{1003,0},
	{1004,0}};
	
	for(k=0;k<5;k++){
		printf("Enter marks for reg No: %d =",arr[k][0]);
		scanf("%d",&arr[k][1]);
	}
	
	int maxRegNo=arr[0][0];
	int minRegNo=arr[0][0];
	
	int maxMarks=arr[0][1];//98
	int minMarks=arr[0][1];//76
	

	for(k=1;k<5;k++){
		if(minMarks>arr[k][1]){ //85>52 ok
			minMarks=arr[k][1];
			minRegNo=arr[k][0];
		}
		if(maxMarks<arr[k][1]){//98<52 x
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
