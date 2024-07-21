//input 1,2,3,-1 whwn user enter-1 exit the while loop
#include<stdio.h>
#include<conio.h>
int main(){
	int num=0;
	
	int sum=0;
	
	printf("Enter a number or enter -1 to exit\n");
	
	scanf("%d",&num);
	int cnt=0;
	
	while(num!=-1){
		
		sum=sum+num;
		
		printf("enter marks\n");
		
		scanf("%d",&num);
		cnt+=1;
		
	     
	}
	printf("Total sum=%d\n",sum);
	float average=sum/cnt;
	printf("Average is=%0.2f",average);
	
	
	getch();
	return 0;
}
