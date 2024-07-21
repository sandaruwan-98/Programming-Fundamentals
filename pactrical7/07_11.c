//07_11
#include<stdio.h>
int main(){
	int i,k;
	
	int arr[8][4]={{100,10,25,0},
	{200,20,30,0},
	{300,30,90,0},
	{400,30,70,0},
	{500,50,80,0},
	{600,10,300,0},
	{700,60,10,0},
	{0,0,0,0}
	};
	
	//get answers for A,B,C,D,E,F,G
	for(i=0;i<7;i++){//
		int tempSum=0;
		for(k=0;k<3;k++){//
		//tempSum=tempSum+arr[i][k];
			tempSum+=arr[i][k];//250
		}
		arr[i][3]=tempSum;//[1,3]=250
	}
	
	//get answers for P,Q,R,Z
	for(i=0;i<4;i++){//1
		int tempSum=0;
		for(k=0;k<7;k++){//2
			//tempSum=tempSum+arr[k][i];
			tempSum+=arr[k][i];//10+20+30+40+50+10+60
		}
		arr[7][i]=tempSum;
	}
	
	
	//prints the final result / print the array 
	for(i=0;i<8;i++){
		for(k=0;k<4;k++){
			printf("%d       ",arr[i][k]);
		}
		printf("\n");
	}
	
	return 0;
}
