/*ABC Finance is a Financial Company. This company has Three Major types of customer
grades called “Gold”, “Silver” and “Bronze”. Each customer type is treated differently*/
#include<stdio.h>
int main(){
	
	printf("customer grades:press G for Gold \n");
	
	printf("customer grades:press S for Silver \n");
	
	printf("customer grades:press B for Bronze \n");
	
	char grade;
	
	printf("Enter coustomer grade:");
	scanf("%c",&grade);
	
	int invest;
	
	printf("enter envestment value:-");
	scanf("%d",&invest);
	
	int interest=grade*invest;
	
	switch(grade)
	{
		case 'G':
			interest=0.5*invest;
			printf("\nThe intrest you resive is:%d",interest);
			break;
		case 's':
			interest=0.25*invest;
			printf("\nThe intrest you resive is:%d",interest);
			break;
		case 'B':
			interest=0.15*invest;
			printf("\nThe intrest you resive is:%d",interest);
			break;
			
		default:
			 printf("Invalid coustermer grade");
		break;
	}
	
	return 0;
}
