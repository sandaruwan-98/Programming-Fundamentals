
#include<stdio.h>
#include<conio.h>
int main(){
	int nod;
	int years;
	int weeks;
	int days;
	
	printf("Enter number of days:- ");
	scanf("%d",&nod);
	
	years=(nod/365);
	
	weeks=(nod%365)/7;
	
	days=(nod%365)%7;
	
	printf("__________________________\n");
	printf("|Years:- %d               |\n",years);
	printf("|________________________|\n");	
	printf("|weeks:- %d              |\n",weeks);
	printf("|________________________|\n");	
	printf("|Days :- %d               |\n",days);
	printf("|________________________|\n");
	
	getch();
	
	return 0;
	
	
}
