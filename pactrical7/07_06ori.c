//07_06
#include<stdio.h>
int main(){
	int array[10]={3,2,4,5,6,4,9,7,8,1};
	int i,min=array[0],max=array[0];
	for(i=1;i<10;i++){
		if(min>array[i]){
			min=array[i];
		}
		if(max<array[i]){
		max=array[i];
		}
		
	}
	printf("a.Minimum of the array is:%d\n",min);
	printf("b.Maximum of the array is:%d\n",max);
	printf("c.Reverse order of the array:");
	for(i=9;i>=0;i--){
		printf(" %d ",array[i]);
	}
	int key;
	printf("\nd.Enter a number to search:");
	scanf("%d",&key);
	int x=0;
	for(i=0;i<10;i++){
		if(array[i]==key){
			printf("Value found at:[%d]\n",i);
			x=1;
		}
		
	}
	if(x==0){
		printf("Value not found");
	}
return 0;	
}
