/*By based on the entered number by the user, determine whether it is less than 10 or
less than 20 or less than 30 or above 40. Use Switch statement*/

#include<stdio.h>

int main(){
	
	int num;
	
	printf("Enter number:");
		
	scanf("%d",&num);
	
	switch(num)
	{
	case 0 ... 9:
		printf("Your enterd number is less than 10");
		break;
		
	case 10 ... 19:
		printf("Your enterd number is less than 20");
		break;
	case 20 ... 29:
		printf("Your enterd number is less than 30");
		break;
	case 30 ... 39:
		printf("Your enterd number is less than 40");
		break;
   	default:
		printf("Your enterd number is above 40");
		break;
	}
	
return 0;

}
