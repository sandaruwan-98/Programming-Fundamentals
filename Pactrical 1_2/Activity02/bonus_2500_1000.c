//Display the Allow user to enter the number of years worked and give the bonus ammount of money
#include<stdio.h>
#include<conio.h>
int main(){
	int a;
	
	printf("Enter the number of years worked:- ");
	scanf("%d",&a);
	
	if(a>=3)
	{
		printf("Special bonus ammount= Rs.2500.00/=");
	}
	else
	{
		printf("bonus ammount = Rs.1000.00/=");
	}
	getch();
	return 0;
}

