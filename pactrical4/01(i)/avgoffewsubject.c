#include<stdio.h>
int main(){
	int m1;
	
	int m2;
	
	int m3;
	
	int m4;
		
	printf("ENTER SUBJECT-01 MARKS:-");
	scanf("%d",&m1);
	
	printf("ENTER SUBJECT-02 MARKS:-");
	scanf("%d",&m2);
	
	printf("ENTER SUBJECT-03 MARKS:-");
	scanf("%d",&m3);
	
	printf("ENTER SUBJECT-04 MARKS:-");
	scanf("%d",&m4);
	
	int total=m1+m2+m3+m4;
	
	float avg=total/4;
	
	puts(" _____________________________________ ");
	printf("| * |  STUDENT'S TOTAL MARKS:-     %d|\n",total);
	puts(" _____________________________________ ");	
	printf("| * |  STUDENT'S AVERAGE    :-   %0.2f|\n",avg);
	puts(" _____________________________________ ");
	
	return 0;
	
}
