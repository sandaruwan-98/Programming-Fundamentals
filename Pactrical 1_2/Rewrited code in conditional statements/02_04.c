/*Read two integer numbers from the keyboard and display the highest number if the values are different.
If user entered values are same output message as “Numbers are equal”conditional opereater*/
#include<stdio.h>
#include<conio.h>
int main(){
	int a;
	
	int b;
	
	printf("Enter number 01:- ");
	scanf("%d",&a);
	
	printf("Enter number 02:- ");
	scanf("%d",&b);
	
	a>b?printf("Number 01 is=%d\n",a),printf("Number 01 is the highest number"):
	b>a?printf("Number 02 is=%d\n",b),printf("Number 02 is  the highest number\n"):
	a==b?printf("numbers are equal"):

	
	getch();
	
	return 0;
			
	}
