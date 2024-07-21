#include<stdio.h>
#include<conio.h>
int main(){
	int a;
	int b;
	int c;
	int d;
	
	printf("Enter value A:-");
	scanf("%d",&a);
	
	printf("Enter value B:-");
	scanf("%d",&b);
	
	printf("Enter value C:-");
	scanf("%d",&c);
	
	printf("Enter value D:-");
	scanf("%d",&d);
	
	a=a+b*c+d;
	printf("____________________\n");
	printf("|Value A is:-  %d |\n",a);
	printf("|__________________|\n");
	printf("|Value B is :-  %d |\n",b);
	printf("|__________________|\n");
	printf("|Value C is :-  %d |\n",c);
	printf("|__________________|\n");
	printf("|Value D is :-  %d |\n",d);
	printf("|__________________|\n");
	
	getch();
	return 0;
	

}
