/*Read two integer numbers from the keyboard and display the highest number if the values are different.
If user entered values are same output message as “Numbers are equal”*/
#include<stdio.h>
#include<conio.h>
int main(){
	int a;
	
	int b;
	
	printf("Enter number 01:- ");
	scanf("%d",&a);
	
	printf("Enter number 02:- ");
	scanf("%d",&b);
	
	if(a>b){
		printf("Number 01 is=%d\n",a);
		printf("Number 01 is the highest number");
	}
		
		if(b>a){
			printf("Number 02 is=%d\n",b);
			printf("Number 02 is  the highest number");
			}
	
	else{
		printf("Numbers are equal");
	}
	getch();
	return 0;
			
	}

