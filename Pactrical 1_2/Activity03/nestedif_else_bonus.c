/*If the number of years for which the employee has served the
organization is greater than or equal to 10 then a bonus of Rs.
5000 is given to the employee. If the number of years grater
than or equal to 8 then the bonus is Rs. 4000. If the number
of years grater than or equal to 5 the bonus is Rs. 3000.Other
wise Rs. 1000 is given.*/
#include<stdio.h>
#include<conio.h>
int main(){
	int a;
	
	printf("Enter number of years served:- ");
	scanf("%d",&a);
		
	if(a>=10){
		printf("years served=%d\n",a);
		printf("your bonus is Rs.5000");
	}
		
	else if(a>=8){
		printf("years served=%d\n",a);
		printf("your bonus is Rs.4000");
	}
	
	else if(a>=5){
		printf("years served=%d\n",a);
		printf("your bonus is Rs.3000");
	}
	
	else if(a<5){
		printf("years served=%d\n",a);
		printf("your bonus is Rs.1000");
	}
	
	getch();
	return 0;
			
	}
