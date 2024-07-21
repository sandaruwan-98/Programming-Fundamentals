//07_04
#include<stdio.h>
int main(){
	int mark[6]={88,99,73,67,89,57};
	int i,sum=0,avg;
	for(i=0;i<6;i++){
		printf("Marks:%d\n",mark[i]);
		//sum=sum+mark[i];
		sum+=mark[i];
	}
	avg=sum/6;
	printf("Total of the sum:%d\n",sum);
	printf("Total of the Avereage:%d",avg);
	
return 0;	
}

